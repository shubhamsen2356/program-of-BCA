#include<conio.h>
#include<iostream>
using namespace std;


class shubh
{
    int val;
    public:
        void input()
        {
            cout<<"enter a number:";
            cin>>val;
        }
        void display()
        {
            cout<<val<<endl;
        }

        shubh replace(shubh s3)
        {
            s3.val = s3.val + 10;
            return s3;
        }
};


int main()
{
    shubh s1,s2;
    s1.input();
    s2=s1.replace(s1);
    s1.display();
    s2.display();
    return 0;
}