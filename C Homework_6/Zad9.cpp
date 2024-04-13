
#include <stdio.h>

int main() {
        int arr[100],n;
        int arr1[100];
    int i,s,j;
	
    printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }

    printf("Insert S\n");
    scanf("%d", &s);

    for (i = 0; i < s; i++)
    {
        int fallingNum = arr[0]; // save falling num

        for(j = 0; j < n-1; j++) {
            arr[j] = arr[j+1]; // shift nums to left
        }

        arr[n-1] = fallingNum; // put falling num at the back of the array
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
