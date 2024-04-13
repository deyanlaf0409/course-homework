
#include <stdio.h>

int main() {

    int arr[100] = {};
	int i,n;
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
	    
	    printf("\n");
	 
	   for(i=0;i<n;i++)
	   {
	       printf("%d   ",i);
	   }
	    printf("\n");
	 
	   for(i=0;i<n;i++)
	   {
	       printf("%d   ",arr[i]); 
	   }
	    
	    
    return 0;
}
