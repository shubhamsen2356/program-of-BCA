#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,j, repeated = 0;
    printf("\n\nenter a string:\n");
    gets(str);
    int len = strlen(str);

    for( i = 0; i < len; i++ )
    {
        repeated = 0;
        for( j = 0; j < len; j++ )
        {
            if( i != j && str[i] == str[j] ) {
                repeated = 1;
                break;
            }
        }         

        if( repeated == 0 )
         {  
            printf(" first non repeated word is:%c",str[i]); 
            break;
         }
    }


}