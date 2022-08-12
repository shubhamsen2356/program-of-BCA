// #include <stdio.h>
// #include <string.h>
 

//  //swaping of characters
// void swap(char *x, char *y)
// {
//     char temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }




 
// void permutation(char *a, int l, int r)
// {
//    int i;
//    if (l == r)
//      printf("%s\n", a);
//    else
//    {
//        for (i = l; i <= r; i++)
//        {
//           swap((a+l), (a+i));
//           permutation(a, l+1, r);
//           swap((a+l), (a+i));
//        }
//    }
// }




// //main function  
// int main()
// {
//     char string[20];
//     int n;
//     printf("Enter a string: ");
//     scanf("%s", string);
// 	n = strlen(string);
//     permutation(string, 0, n-1);
    
// 	return 0;
// }




































#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *,char *);
void permutation(char *,int,int);

int main()
{
    char string[20];
    int n;
    printf("enter a string:");
    scanf("%s",string);
     n=strlen(string);
    permutation(string,0,n-1);
}



void permutation(char *s,int first,int last)
{
    if(first==last)
        printf("%s\n",s);
    else
        {
            for(int i=first;i<=last;i++)
            {
                swap((s+first),(s+i));
                permutation(s,first+1,last);
                swap((s+first),(s+i));
            }
        }    
}


void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;

}