#include <iostream>
#include <iomanip>
#include <time.h>
#include "mytime.h"
using namespace std;

void MyTime::normalizeTime()
{
    if(hour < 0)
        hour = 24 - (-hour % 24);
    if(minute < 0)
        minute = 60 - (-minute % 60);
    hour += (minute / 60);
    hour %= 24;
    minute %= 60;
}

MyTime::MyTime(int hour, int minute)
{
    this->hour = hour;
    this->minute = minute;
    normalizeTime();
}

MyTime::MyTime()
{
    this->hour = 0;
    this->minute = 0;
    normalizeTime();
}

MyTime::MyTime(int minute)
{
    hour = 0;
    this->minute = minute;
    normalizeTime();
}

/*
void MyTime::output()const
{
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<endl;
}*/
std::ostream & operator<<(std::ostream & out, const MyTime & t)
{
    cout<<setfill('0')<<setw(2)<<t.hour<<":"<<setw(2)<<t.minute<<endl;
    return out;
}

void MyTime::setTime(int hour, int minute)
{
    this->hour = hour;
    this->minute = minute;
    normalizeTime();
}

int MyTime::getHour()const
{
    return hour;
}

int MyTime::getMinute()const
{
    return minute;
}

int MyTime::getTotalMinutes()const
{
    return hour * 60 + minute;
}

MyTime MyTime::operator -(const MyTime & newTime)const
{
    int MinuteSpan = (this->hour - newTime.hour) * 60 + (this->minute - newTime.minute);
    MyTime TimeSpan(MinuteSpan);
    return TimeSpan;
}

/*
MyTime MyTime::getTimeSpan(const MyTime & t) const
{
    int MinuteSpan = (this->hour - t.hour) * 60 + (this->minute - t.minute);
    MyTime TimeSpan(MinuteSpan);
    return TimeSpan;
}*/
