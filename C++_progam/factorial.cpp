#include<iostream>
using namespace std;
int main()
{
     int n,fact=1;
     cout<<"enter a number:";
     cin>>n;
     for(int i=1;i<=5;i++)
     {
         fact=fact*i;
     }
     cout<<"factorial is:"<<fact;
}