#include <bits/stdc++.h>
#include "complex.h"
#include "fraction.h"
#include "mytime.h"
#include "randomnum.h"
#include "parkingcard.h"
#include "point.h"
#include "triangle.h"
#include "biginteger.h"
using namespace std;
class mmm
{
private:
    int a;
public:
    mmm(int i = 1):a(i){}
};

int main(){
    ParkingCard card(5);
    card.setParkingTime(MyTime(9,20));
    card.setLeavingTime(MyTime(11,35));
    cout<<"Expenses:"<<card.getTotalExpenses()<<endl;
    cout<<"Detailed info:"<<endl;
    cout<<card<<endl;
    return 0;
}
