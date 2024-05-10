#include <iostream>
#include <cstring>
#include "mystring.h"

MyString::MyString()
{
    str = nullptr;
}

MyString::MyString(const char * s)
{
    str = new char[strlen(s) + 1];//The '+ 1' is for '/0'
    strcpy(str, s);
}

MyString::MyString(const MyString & s)
{
    int size1 = s.size();
    str = new char [size1 + 1];
}

MyString::MyString(MyString && s)
{
    int size = s.size();
    str = new char [size + 1];
}

MyString::~MyString()
{
    delete str[];
}

int size()const
{
    return strlen(str);
}

MyString & operator=(const MyString & s)
{
    int size = s.size();
    delete str[];
    str = new char [size + 1];
    for(int i = 0; i <= size; ++ i)
    {
        *(str + i) = *(s.str + i);
    }
    return str;
}

MyString & operator=(MyString && s)
{
    MyString temp;
    temp.str = s.str;
    return temp;
}

MyString operator + (const MyString & s)const;
char & operator[](int index)
{
    return *(str + index);
}

const char & operator[](int index)const
{
    return *(str + index);
}
std::ostream & operator<<(std::osteam & out, const MyString & s)
{
    int size = s.size();
    for(int i = 0; i <= size; ++ i)
    {
        cout<<*(str + i);
    }
    return out;
}
