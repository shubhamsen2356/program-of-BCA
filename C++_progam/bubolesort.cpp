#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[100],b[100];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<endl<<"enter the element in the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<" after bubbol sorting,series is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

}