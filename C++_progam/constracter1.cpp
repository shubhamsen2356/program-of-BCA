#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class stu
{
    int a,b;
    public:
    stu(void);
    void print(void);
};

stu::stu(void)
{
    a=10;
    b=40;
}

void stu::print(void)
{
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}



int main()
{
    stu s1;
    s1.print();

    return 0;
}