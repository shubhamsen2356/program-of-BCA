#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  static  int count=0,i=0;
    char a[100],b[100],c;
    printf("enter first string:");
    gets(a);
    printf("enter a character:") ;   
    scanf("%c",&c);
    
    while (a[i]!='\0')
    {
       if (a[i]==c)
       {
           count++;
       }
       i++;
    }

    printf("accurance is: %d",count);
    
}
