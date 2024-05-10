#ifndef PARKINGCARD_H
#define PARKINGCARD_H
#include "mytime.h"
class ParkingCard
{
public:
    ParkingCard(double newRate){rate = newRate;}
    void setRate(double newRate){rate = newRate;}
    double getRate()const{return rate;}
    void setParkingTime(const MyTime & time);
    void setLeavingTime(const MyTime & time);
    double getTotalExpenses()const;
    //void output()const;
    friend std::ostream& operator<<(std::ostream & out, const ParkingCard & t);
private:
    double rate;
    MyTime parkingTime;
    MyTime leavingTime;
};

#endif // PARKINGCARD_H
