#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
   int j=0,count=0,t=0;
    printf("enter a string:");
    gets(a);

    
int l= strlen(a);









    for(int i=0;a[i]!=l;i++)
    {
        while(a[t]!=' ')
        {
            b[j]=a[t];
           count++;
           j++;
           t++;
        }
        printf("count =%d\n",count);

        
        if(a[i]==' ')
        {
           printf("_");
        }
        else{
             for(int k=count;k>=0;k--)
                {
                    printf("%c",b[k]);
                }
            count=0;
            j=0;
            printf("\n");
          
        }
printf("---------------------------------------------");

    }

return 0;
}