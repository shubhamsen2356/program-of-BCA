#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    int id;
    char name[100];
    int num;
    public:
    void input();
    void show();
};

void student:: input()
{
    cout<<"enter id ";
    cin>>id;
    cout<<"enter name ";
    cin>>name;
    cout<<"enter number ";
    cin>>num;
}

void student:: show()
{
    cout<<"id :"<<id<<endl<<"name:"<<name<<endl<<"number:"<<num<<endl;
}

int main()
{
    student s1;
    s1.input();
    s1.show();
    return 0;
}