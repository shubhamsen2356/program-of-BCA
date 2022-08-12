#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
   char s[10], *k,n[20];
   int re;
   
   printf("enter a string:");
   scanf("%s",s);
   strcpy(n,s);
    k=strrev(s);
    re=strcmp(k,n);
   
   if(re==0)
   {
      printf("string is palindrom");
   }else 
   printf("string is not palindrom");
}