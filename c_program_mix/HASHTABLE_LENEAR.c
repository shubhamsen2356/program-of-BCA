#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int hash(int, int );
void intt();
void show();
void delete_value();
int search_value();
   int a[100],data,n,index;


void main()
{
 
        int choice;
     
    printf("enter the size of array(MAX-100):"); 
    scanf("%d",&n);
     intt();
   
   
    while(1)
    {
        printf("\n1-for enter\n2-for show\n3-for delete value\n4:for search");
        printf("\nenter your choice");
        scanf("%d",&choice);
      
        switch (choice)
        {

        case 1:

        hash(n,data);
            break;
        case 0:
              exit(1);
            break;    
        case 2:
                show();
                 break;
        case 3:
             delete_value();
             break;
        case 4:
            search_value()==1;
            printf("value found at %d",index);
            break;     
        
        default: printf("\nplease enter right choice");
            break;
        }
    }

}
void intt()
{
    for(int i=0;i<n;i++)
        a[i]=-1;

}

int hash(int n,int data)
{
     printf("inter the data the you want to insert:");
    scanf("%d",&data);
        int key=data%n;
    int index=key;
    while(a[index]!=-1)
    {
        index=(index+1)%n;
        if(index==key)
        {
            printf("array is full");
            return 0;
        }
    }
    a[index]=data;
    printf("value is inserted");
}

void show()
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
}

void delete_value()
{
    int val;
    printf("\nenter the value that you want to delete:");
    scanf("%d",&val);
     int key=val%n;
     int index=key;
    while(a[index]!=val)
    {
        index=(index+1)%n;
        if(key==index)
        {
            printf("value not found in the array");
        }

    }
    a[index]=-1;
    printf("\nvalue deleted that you want delete");


}


int search_value()
{
    int val;
    printf("\nenter the value that you want to search:");
    scanf("%d",&val);
     int key=val%n;
     index=key;
    while(a[index]!=val)
    {
        index=(index+1)%n;
        if(key==index)
        {
            printf("value not found in the array");
              return 0;
        }
        return 1;
    }
}
