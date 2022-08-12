#include<stdio.h>
#include<conio.h>
int shortin();
int a[100],i,b[1],c=0;
void main()
{
   if(shortin()==1)
   printf("the number:%d found at the index:%d",b[0],c);
     else
        printf("the value not found");    
} 

int shortin()
{
      int n,val;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf(" pleas enter  a  list:");
    for( i=0; i<n;i++)
    scanf("%d",&a[i]);

       printf("enter the key that you want to search:");
    scanf("%d",&val);


    for(int  i=0;i<n;i++)
       {
          b[0]=a[i];
          c++;
           if(a[i]==val)
        {
           return 1;
        break;
        }
      }
      return 0;
}