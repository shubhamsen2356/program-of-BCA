#include<conio.h>
#include<iostream>
using namespace std;

//-----------------------------structer-----------------
// struct student
// { 
//     int num;
//     char name[200];
//     float salary; // member variable
//     void input() //member function
//     {
//         num=5678;
//     }
// };

// int main()
// {
//  student s1;// variable declaire 

//     return 0;
// }

//---------------------class-----------------------














class student
{ 
    int num;
    char name[200];
    float salary; // member variable

    public:
    void input() //member function
    {
        num=5678;
        cout<<num;
    }
};

int main()
{
  student s1; //object declair;

   s1.input();
    return 0;
}















