#include<conio.h> 
#include <stdio.h>
void main()
{
	int arr[100], i, j, k, n;
	
	printf("enter the n of array:");
	scanf("%d", &n);
	
	printf("\n enter the elements:");
	for (i = 0; i < n; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
 //traversing the array from first element
	for (i = 0; i < n; i++)
	{   // traversing the array from second element
		for(j = i + 1; j < n; j++)
		{  // comparing the array element first and second
    		if(arr[i] == arr[j])
    		{//sifting the same element at the last 
    			for(k = j; k < n; k++)
    			{
    				arr[k] = arr[k + 1];
				}
                //deleting the size of array
				n--;
                //decreament the j for comparing the next element
				j--;
			}
		}
	}

 	printf("\n after deleting the same elements:");
 	for (i = 0; i < n; i++)
  	{
 		printf("%d,", arr[i]);
  	}	     
 	
}