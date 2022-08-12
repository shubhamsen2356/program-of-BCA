#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i;
    static  int count=0;
    char a[100],b[100];
    printf("enter first string:");
    gets(a);
    printf("enter second string:");
    gets(b);
    for (i = 0; a[i]!='\0'; i++);
    for (int j=0; b[j]!='\0';i++,j++)
    {
        a[i]=b[j];
    }
    a[i]='\0';
    printf("after merge:\n");
    puts(a);


}