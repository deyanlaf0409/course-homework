#include <stdio.h>
int main()
{
    int arr[100], n,ctr=0;
    int i, j,number;
    int count = 0;
	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                count++;
	                number = arr[i];
	           
	            }
	        }
	    }
	    printf("\n %d is repeating %d times ",number, count);

}
