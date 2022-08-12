#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],str1[20];
    int i=0,k=0,l=0;
    printf("enter a string:");
    scanf("%s",str);

    while(str[k]!='\0')
    {
     l++;   
     k++;
    }
   //coping the last index to the first index.
    for(int j=l-1;j>=0;j--,i++)
    {
         str1[i]=str[j];
    }
//asigning the null value at the last of string
   str1[i]='\0';
   printf("reverse is: %s",str1);


}