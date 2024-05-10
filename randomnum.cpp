#include "randomnum.h"
#include <cstdlib>
#include <ctime>
using namespace std;

RandomNum::RandomNum()
{
    srand(time(NULL));
}

RandomNum::RandomNum(unsigned int seed)
{
    srand(seed);
}

void RandomNum::setSeed(unsigned int seed)
{
    srand(seed);
}

int RandomNum::random(int max = RAND_MAX)
{
    return rand() % max;
}

double RandomNum::frandom()
{
    return (double)rand() / RAND_MAX;
}
