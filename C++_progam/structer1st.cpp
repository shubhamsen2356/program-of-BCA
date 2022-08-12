#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    int roll;
    char name[100];
    int number;
}s1;

student input();
void display(student);
int main()
{
    student s;
    s=input();
    display(s);
    return 0;
}

void display(student s4)
{
    cout<<s4.roll<<" "<<s4.name<<" "<<s4.number;
}



student input()
{
    student s2;
    printf("enter name, roll number,mobile number:");
    cin>>s2.roll>>s2.name>>s2.number;
    return s2;
}