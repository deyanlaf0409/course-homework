
#include <stdio.h>

int main() {
        int arr[100],n;
    int i,min,max;
	
    printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }

 min=max=arr[0];
    for(i=0; i<n; i++)
    {
         if(min>arr[i])
         {
		  min=arr[i]; 
         }
		   if(max<arr[i])
    {
		    max=arr[i];  
}
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
 
}
