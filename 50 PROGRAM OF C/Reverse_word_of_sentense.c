#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,l;
    printf("please enter a string:");
    gets(s);
    printf("\ngiven string is:");
    printf("%s",s);
    l= strlen(s);
   printf("\n\n\n");

    for(int k=l-1;k>=0;k--)
    {
        if(s[k]==' ')
        {
            printf(" ");
        }
        else
        {
            printf("%c",s[k]);
        }
        
    }

return 0;
}














// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main()
// {
//     int i=0,ch;
//     int count=0;
//     char s[100],*ptr[25];
//     //taking sentense from user
//     printf("enter a sentense:");
//     gets(s);
//     // breaking the sentense from space " " word by word
//     ptr[i]=strtok(s," ");

//     while (ptr[i]!=NULL)
//     {
//       i++;
//       ptr[i]=strtok(NULL," ");
//     }

//     int last=i-1;
   
//     for (int  j = last; j >=0; j--)
//     {
//         printf(" %s",ptr[j]);
//     }

   
   
// }