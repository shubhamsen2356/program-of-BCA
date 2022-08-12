#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,val,count=0;
    int mid;
    printf("emter the size of array:");
    scanf("%d",&n);
    printf(" pleas enter  sorted list:");
    for(int i=0; i<n;i++)
    scanf("%d",&a[i]);


    int start=a[0];
    int last=n-1;

    
    printf("enter the key that you want to search:");
    scanf("%d",&val);
    while(start<=last)
    {
    mid=(start+last)/2;
        if(a[mid]==val)
        {
            count++;
            break;
        }
        if(a[mid]<val)
        start=mid+1;
        else
        last=mid-1;
    }        
    
    if(count==0)
    printf("\nthe value not faound\n\n");
    else
    {
         printf("value is:%d found at the index %d",a[mid],mid);
    }
    

}