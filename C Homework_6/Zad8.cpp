
#include <stdio.h>

int main() {
        int arr[100],n;
        int arr1[100];
        int arr2[100];
    int i,j=0,k=0;
	
    printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }

   for(i=0;i<n;i++)
   if(arr[i] % 2 == 0)
   {
        printf("%d is even.", arr[i]);
        arr2[j] = arr[i];
        j++;
   }
    else
    {
        printf("%d is odd.", arr[i]);
        arr1[k] = arr[i];
        k++;
        
    }

    printf("\n");
     printf("First array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
     printf("Odd array :");
    for(i=0;i<k;i++)
    {
        printf("%d ",arr1[i]);
    }
    
    printf("\n");
     printf("Even array :");
    for(i=0;i<j;i++)
    {
        printf("%d ",arr2[i]);
    }

}
