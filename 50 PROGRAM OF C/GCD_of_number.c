#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,count=0,p=0,i,k;
    printf("enter two number:");
    scanf("%d%d",&n,&m);
     for( i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
             k=i;
        }
       
    }
    printf("GCD is:%d",k);
   

}





// #include <stdio.h>
// int main() {
//     int n1, n2, max;
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &n1, &n2);

//     max = (n1 > n2) ? n1 : n2;

//     while (1) {
//         if (max % n1 == 0 && max % n2 == 0) {
//             printf("The LCM of %d and %d is: %d.", n1, n2, max);
//             break;
//         }
//         ++max;
//     }
//     return 0;
// }