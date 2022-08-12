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
        if((a[i]>='a' && a[i]<='z') ||(a[i]>='A' && a[i]<='Z'))
        {
            alfa++;
        }else if (a[i]>='1' && a[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
        i++;
    }

    printf("alphabet is:%d\n digits is:%d\n special character is:%d\n",alfa,digit,special);
    
    




}
