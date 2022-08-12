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
    int n,i;
    student s[10];
    cout<<"enter the number of student:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"------------enter data------------"<<endl;

        s[i].input();
        cout<<endl<<endl;
    }
    cout<<"****************student data is******************"<<endl;
    for(i=0;i<n;i++)
    {
        s[i].show();
        cout<<"-------------------------------------------"<<endl;
    }
    return 0;
}