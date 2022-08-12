
#include<iostream>

using namespace std;
int main()
{
    int n,m,count=0,p=0,i,k;
    cout<<"enter two number:";

    cin>>n>>m;
     for( i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            
             k=i;

        }
       
    }
   cout<<"GCD is:"<<k;
   
return 0;
}