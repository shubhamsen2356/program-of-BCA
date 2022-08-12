#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
   char s[10],n[20];
   int i=0,count=0;
   printf("enter a string:");
   scanf("%s",s);

    while (s[i]!='\0')
    {
        n[i]=s[i];
        i++;
    }
    n[i]='\0';  
    int l= strlen(s);
    int m=l-1;
    for(int k=0;k<=l;k++,m--)
    {
        if(n[k]==s[m])
        {
            count++;
        }
    }        

    if(count==l)
        printf("\nstring is palindrom");
    else
        printf("\nstring is not palindrom");    

   

}
