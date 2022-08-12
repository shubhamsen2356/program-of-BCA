#include<iostream>
#include<conio.h>
using namespace std;

class shubh
{
    int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        friend void Add(shubh);// declairing friend function
};

//defining friend function
void Add(shubh s)
{
    cout<<s.a+s.b;
}


int main()
{
    shubh s1;
    s1.setData(10,20);
    //calling friend function
    Add(s1);
    return 0;
}