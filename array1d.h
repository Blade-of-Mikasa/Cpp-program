#ifndef ARRAY1D_H
#define ARRAY1D_H

class Array1D
{
public:
    Array1D(int *p,int s);
    Array1D();
    Array1D(int s);
    ~Array1D();
    //Array1D(const Array1D & a);//拷贝构造
    //Array1D(Array1D && a);//移动构造
    //Array1D& operator = (const Array1D & a);//拷贝赋值
    //Array1D& operator = (Array1D && a);//移动赋值
    int getSize()const;
    int getValue(int index);
    void setValue(int index,int value);
private:
    int *pData;
    int size;
    bool validIndex(int index);
};

#endif // ARRAY1D_H
