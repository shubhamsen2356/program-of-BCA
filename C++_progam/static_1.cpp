#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
// void fun(void);

/*  static local variable*/
// void fun()
// {
//     static int x;  //declair a variable as a stic{life time through the till of the program }
//     int y;//local variable {through the function end}
// }

/*  static member variable */

class student
{
    int roll; //instance member variabel
    static int id; //static member variable & class variable

    public:
        void input( int num)
        {
            roll=num;
        }
    static void dis(int k)
    {
        id=k;
        cout<<id;
    }    
};

int student:: id;

int main()
{
    // fun();
    student s1;
    student::dis(52);

    return 0;
}