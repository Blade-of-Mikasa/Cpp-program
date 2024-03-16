#include <iostream>
#include <ctime>
using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}

void exact_division(int *a,int *b){
    if(*a<*b)
    {
        int buf;
        buf=*a;
        *a=*b;
        *b=buf;
    }
    while(*a%*b)
        (*b)--;
}

char menu(){
    char choice;
    cout<<"1) add two number\n";
    cout<<"2) sub two number\n";
    cout<<"3) multiply two number\n";
    cout<<"4) div two number\n";
    cout<<"0) quit\n";
    cout<<"Enter your choice:\n";
    cin>>choice;
    return choice;
}

bool answerQuestion(int num1,int num2,int (*f)(int ,int ), int answer ){
    return f(num1,num2)==answer;
}

bool deal_with_choice(int choice,int *right_count,int *all_count){
    if(choice=='0')
    {
        cout<<"total :"<<*all_count<<endl;
        cout<<"right_rate :"<<100*(double)*right_count/(*all_count)<<"%\n";
        return false;
    }
    else if(choice<48||choice>52){
        cout<<"Wrong input!"<<endl;
        return false;
    }
    return true;
}

void feedback(bool ok,int remaining_time){
    if(ok)
        cout<<"Correct!"<<endl;
    else if(remaining_time)
        cout<<"Wrong!"<<endl<<"remain time :"<<remaining_time<<endl;
    else
        cout<<"Wrong!"<<endl;
}

int main(){
    srand((unsigned)time(NULL));

    int right_count=0,all_count=0;
    while(true)
    {
        //调用菜单，输入 choice
        char choice=menu();
        //通过 choice 是否为 0 来决定是否结束，结束时通过问题总数和正确数来得到并输出正确率
        if(!deal_with_choice(choice,&right_count,&all_count))
            return 0;

        int num1, num2;
        num1=rand()%90+10; //得到 10~99 的整数
        num2=rand()%90+10;
        decltype(add) *pf; //函数指针，类型由 decltype 推断
        char op;
        switch(choice)
        {
            case '1':pf=add; op='+'; break;
            case '2':pf=sub; op='-'; break;
            case '3':pf=multiply; op='*'; break;
            case '4':pf=divi; op='/'; exact_division(&num1,&num2); break;
            default:continue;//疑存bug
        }

        int answer, remaining_time=3;
        bool ok=true;
        all_count++;

        //下面开始考虑对错和次数问题
        while(remaining_time){
            remaining_time--;
            cout<<num1<<op<<num2<<"=?"<<endl;
            cin>>answer;
            ok=answerQuestion(num1,num2,pf,answer);//答案是否正确
            feedback(ok,remaining_time);//显示对错和剩余次数
            if(ok){
                right_count++;
                break;
            }

        }
    }
    return 0;
}
