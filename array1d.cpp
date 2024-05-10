#include "array1d.h"
#include <stdlib.h>
using namespace std;

bool Array1D::validIndex(int index)
{
    if(index > size || index < 0)
    {
        return false;
        exit(0);
    }
    return true;
}

Array1D::Array1D(int * p, int s)
{
    pData = new int [s];
    size = s;
    for(int i = 0; i < size; ++i)
    {
        pData[i] = p[i];
    }
}

Array1D::Array1D()
{
    this->pData = nullptr;
    this->size = 0;
}

Array1D::Array1D(int s)
{
    pData = new int [s];
    size = s;
    for(int i = 0; i < size; ++i)
    {
        pData[i] = 0;
    }
}

int Array1D::getSize()const
{
    return size;
}

int Array1D::getValue(int index)
{
    validIndex(index);
    return pData[index];
}

void Array1D::setValue(int index, int value)
{
    validIndex(index);
    pData[index] = value;
    return;
}
