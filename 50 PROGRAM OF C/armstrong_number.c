#include<stdio.h>
#include<conio.h>

void main()
{
    int l=0,n;
    int a,i,p;
    int mu=1,arm=0;
    printf("enter a number:");
    scanf("%d",&n);
    int  m=n;
    p=n;
    //this loop is for calculate length of number
    while (m!=0)
    {
        m=m/10;
        l++;
    }

    //this is for calculate armstrong number
    for(int k=0;k<l;k++)
    {
        i=0;
        a=n%10;
                //there i am multiplying number
                while (i!=l)
                {
                    mu = mu*a;
                    i++;
                }
      arm = arm+mu;
       mu=1;
      n=n/10;  
    }
   if(p==arm)
        printf("number is armstrong");
    else
        printf("number is not armstrong");    

}