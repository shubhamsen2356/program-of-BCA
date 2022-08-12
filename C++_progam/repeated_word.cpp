#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char s[100],p[10];
    int count=0,k=0;
    cout<<"enter a string:";
    gets(s);
     for(int i=0;s[i]!='\0';i++)
    {   
        count=0;
        for(int j=i;s[j]!='\0';j++)
        {
             if(s[i]==s[j])
             {
                 count++;
             }
        } 
        if(count>=2 && p[k]!=s[i])
        {
            p[k]=s[i];
            cout<<s[i]<<" p"<<"is repeated:"<<count<<endl;   
        }
    }
    return 0;
}