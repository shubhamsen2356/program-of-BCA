#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i=0,ch;
    int count=0;
    char s[100],*ptr[25];
    printf("enter a sentense:");
    gets(s);

    ptr[i]=strtok(s," ");

    while (ptr[i]!=NULL)
    {
      i++;
      ptr[i]=strtok(NULL," ");
    }

    int last=i-1;
   
    for (int  j = 0; j <i/2; j++)
    {
        ch=strcmp(ptr[j],ptr[last-j]);
        if(ch==0)
        {
             count++;
        }
    }

    if(count==i/2)
        printf("sentense is palindrom ");
   else
        printf("sentense is not palindrom");
   
}