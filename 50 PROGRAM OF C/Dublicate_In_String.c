#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[100];
    int count=0;
    char p[1000],*ptr[1000];
    int k=0,i=0;
    printf("enter a string:");
    gets(s);
    
    puts(s);
    
     ptr[i]=strtok(s," ");

    while (ptr[i]!=NULL)
    {
      i++;
      ptr[i]=strtok(NULL," ");
    }
    while (ptr[i]!=NULL)
    {
      i++;
      printf("%s\n",*ptr[i]);
    }





    for(int i=0;s[i]!='\0';i++)
    {   
        count=0;
        for(int j=i;s[j]!='\0';j++)
        {
             if(s[i]==s[j])
             {
                 count++;
             }
        }
        if(count>=2 && p[k]!=s[i])
        {
            p[k]=s[i];
            printf("\n%c is repeated: %d",s[i],count);   
        }
        
    }
}