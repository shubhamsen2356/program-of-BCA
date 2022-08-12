#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
   int k= fact(n);
    printf("factorial is : %d",k);

}
int fact(int n)
{
    if(n==1)
        return 1;
     else
        return n*fact(n-1);    
}
