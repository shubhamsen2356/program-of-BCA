#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i=0,j,alfa,digit,special;
    alfa=digit=special=0;
  static  int count=0;
    char a[100],b[100];
    printf("enter first string:");
    gets(a);
    while (a[i]!='\0')
    {
        if(a[i]==' ')
        {
            count++;
        }      
    i++;
    }
    printf("%d",count);
}