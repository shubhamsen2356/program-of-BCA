#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  static  int count=0;
    char a[100],b[100];
    printf("enter first string:");
    gets(a);
    printf("enter second string:");
    gets(b);

    int m = strlen(a);
    int n = strlen(b);
    // printf("%d%d",m,n);
    
    if(m==n)
    {

        for (int i = 0; a[i]!='\0'; i++)
        {
               for (int j = 0; b[j]!='\0'; j++)
                {
                    if(a[i]==a[j])
                    {
                        count++;
                    }
                }   
        }
    

    if (count==n)
    {
        printf("strings are anagram");
    
    } else{
        printf("not anagram");
    }
    }
   
}