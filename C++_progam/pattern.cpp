#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"enter a number:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for( j=i;j<=n;j++)
        cout<<" ";
        for(int k=0;k<i;k++)
        cout<<"* ";
        cout<<endl;

    }

    return 0;

}