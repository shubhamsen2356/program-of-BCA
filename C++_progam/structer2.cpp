#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    int roll;
    char name[100];
    int number;
    void input()
    {
         printf("enter name, roll number,mobile number:");
         cin>>roll>>name>>number;
    }

    void display()
    {
        cout<<roll<<" "<<name<<" "<<number;
    }



}s1;

int main()
{
    s1.input();
    s1.display();
    return 0;
}

