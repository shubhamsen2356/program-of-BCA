#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  static  int count=0;
    char a[100],b[100];
    printf("enter first string:");
    gets(a);

    int l= strlen(a);
    for (int i = 0; i<=l; i++)
    {
        b[i]=a[i];
    }
    printf("after copy:\n");
    puts(b);


}