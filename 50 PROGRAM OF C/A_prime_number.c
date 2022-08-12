#include<stdio.h>
#include <conio.h>
void main()
{
    int n,m,count=0;
    printf("enter any number:");
    scanf("%d%d",&n,&m);
    
        while(n!=m)
        {
            for(int i=2;i<m;i++)
             {
                if(n%i==0 && n!=i)
                {
                    break;
                }
                else
                {
                    if(n!=9)
                    printf("%d,",n);
                    break;
                }

                
             }
        n++;
    }
   
}