#include<iostream>
using namespace std;
int main()
{
    int n,r=0,a;
    cout<<"enter a number:";
    cin>>n;
    int m=n;
    while (n!=0)
    {
        a=n%10;
        r = (r*10)+a;
        n=n/10;
    }
 
    if(m==r)
    cout<<"number is palindrom";
    else
    cout<<"number is not palindrom";
    
    return 0;
}