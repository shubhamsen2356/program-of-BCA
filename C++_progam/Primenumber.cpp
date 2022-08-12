#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter any number:";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<"this is prime number";
    }else
    cout<<"this is not prime number";

    return 0;
}
