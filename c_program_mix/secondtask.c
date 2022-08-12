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


  

    l= strlen(s);

   printf("\n\n\n");

    for(int k=l-1;k>=0;k--)
    {
        if(s[k]==' ')
        {
            printf(" d");
        }
        else
        {
            printf("%c",s[k]);
        }
        
    }

return 0;
}
