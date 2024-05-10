#ifndef RANDOMNUM_H
#define RANDOMNUM_H

class RandomNum
{
public:
    RandomNum();
    RandomNum(unsigned int seed);
    void setSeed(unsigned int seed);
    int random();
    int random(int max);
    double frandom();
};

#endif // RANDOMNUM_H
