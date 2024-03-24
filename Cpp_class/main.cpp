#include <iostream>
#include "complex.h"
#include "fraction.h"
#include "biginteger.h"
using namespace std;

int main()
{
    Complex c1, c2(2), c3(3, 4);
    c1.output();
    c2.output();
    c3.output();
    c1.setValue(6, 4);
    c1.output();
    cout<<c1.getDistance()<<endl;
    return 0;
}

