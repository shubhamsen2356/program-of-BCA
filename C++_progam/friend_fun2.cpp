#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
    int a;
    friend void Add(A,B);
    public:
        void setData(int x)
        {
            a=x;
        }
};

class B
{
    int b;
    friend void Add(A,B);
    public:
        void setData(int y)
        {
            b=y;
        }
};

void Add(A a1,B b1)
{
    cout<<"sum is: "<<a1.a+b1.b;
}

int main()
{
    A s1;
    B s2;
    s1.setData(10);
    s2.setData(20);
    Add(s1,s2);
    return 0;
}