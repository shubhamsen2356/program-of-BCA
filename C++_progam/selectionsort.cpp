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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"series is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

}