#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],t[100],count=0;

    printf("enter a string:");
    gets(s);
    printf("enter a string:");
    gets(t);

    int n=strlen(s);
    int m=strlen(t);
    printf("shubha:%d",n);
    if(n==m)
    {
        for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                jjj
                
                if(s[i]==t[j])
                {
                    count++;
                }
             }   
        }   
    }
    printf("sen:%d",count);
    
 if(count==n)
    {
        printf("strings are anagram");
    }
    else
    printf("not anagram");
    
    
}