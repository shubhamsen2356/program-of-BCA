#include<iostream>
using namespace std;
int main()
{
    int n,a,b=1,c=0;
    cout<<"enter number for fibbonaci series";
    cin>>n;
    cout<<"series is :"<<endl;
    for(int i=0;i<=n;i++)
    {
        a=b+c;
        cout<<a<<" ";
        b=c;
        c=a;
    }
}
