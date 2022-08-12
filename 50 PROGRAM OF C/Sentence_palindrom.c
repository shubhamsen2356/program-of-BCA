#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i=0,ch;
    int count=0;
    char s[100],*ptr[25];
    //taking sentense from user
    printf("enter a sentense:");
    gets(s);
    // breaking the sentense from space " " word by word
    ptr[i]=strtok(s," ");

    while (ptr[i]!=NULL)
    {
      i++;
      ptr[i]=strtok(NULL," ");
    }

    int last=i-1;
   
    for (int  j = 0; j <i/2; j++)
    {
         // comparing the first and last word in sentense
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