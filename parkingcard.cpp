#include <iostream>
#include "parkingcard.h"
#include "mytime.h"
using namespace std;
/*ParkingCard::ParkingCard(double newRate)
{
    rate = newRate;
}

void ParkingCard::getRate(double newRate)
{
    rate = newRate;
    return;
}

double ParkingCard::getRate()const
{
    return rate;
}*/

void ParkingCard::setParkingTime(const MyTime & time)
{
    parkingTime = time;
    return;
}

void ParkingCard::setLeavingTime(const MyTime & time)
{
    leavingTime = time;
    return;
}

double ParkingCard::getTotalExpenses()const
{
    return (leavingTime.getTotalMinutes() - parkingTime.getTotalMinutes()) * rate;
}

std::ostream & operator<<(std::ostream & out, const ParkingCard & t)
{
    cout<<"Total Expenses:"<<t.getTotalExpenses()<<endl;
    cout<<"Parking Time:"<<t.parkingTime<<endl;
    cout<<"Leaving Time:"<<t.leavingTime<<endl;
    return out;
}
