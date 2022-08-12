#include<iostream>
using namespace std;
int main()
{
    int a[100],n,index,value,i;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    cin>>a[i];

        for( i=1;i<n;i++)
        {
            value=a[i];
            index=i;
            while(index>0 && a[index-1]>value)
            {
                a[index]=a[index-1];
                index--;
            }

            a[index]=value;

        }


        cout<<"after insertion sorting,series is:"<<endl;
      for(int i=0;i<n;i++)
      cout<<" "<<a[i];


    return 0;
}