#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
public:
    MyString();
    MyString(const char * s);
    MyString(const MyString & s);
    MyString(MyString && s);
    ~MyString();

    int size()const;

    MyString & operator=(const MyString & s);
    MyString & operator=(MyString && s);
    MyString operator + (const MyString & s)const;
    char & operator[](int index);
    const char & operator[](int index)const;
    friend std::ostream & operator<<(std::ostream & out, const MyString & s);
private:
    char *str;
};

#endif // MYSTRING_H
