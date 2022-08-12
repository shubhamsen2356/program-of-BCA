
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100],c;
   FILE *ptr;
   ptr = fopen("demo.txt","w");
   printf("Enter your data: ");
   fputs(str,ptr);
   printf("data has written");
   ptr = fopen("demo.txt","r");
   

    while (c=fgetc(ptr)!='\0')
    {
        printf("%c",c);
    }
    
  
   fclose(ptr);

   return 0;
}