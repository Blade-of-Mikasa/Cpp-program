#ifndef MYTIME_H
#define MYTIME_H

class MyTime
{
public:
    MyTime();//{hour = 0; minute = 0;};
    MyTime(int minute);
    MyTime(int hour , int minute);
    void setTime(int hour, int minute);
    int getHour()const;
    int getMinute()const;
    int getTotalMinutes()const;
    //void output()const;
    friend std::ostream & operator<<(std::ostream & out, const MyTime & t);
    //MyTime getTimeSpan (const MyTime & t)const;
    MyTime operator-(const MyTime & newTime)const;
private:
    int hour;
    int minute;
    void normalizeTime();
};

#endif // MYTIME_H
