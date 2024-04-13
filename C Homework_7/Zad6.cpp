
#include <stdio.h>

int main() {

    int arr[100];
    int i,n,new_num,position;
	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }


         printf("\nResult array after sorting: ");
    for(i = 0; i < n; i++){
        int temp;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
    for(i = 0; i < n ; i++)      
        printf(" %d ",arr[i]);
        

        
        printf("Add number:"); 
        scanf("%d",&new_num);
        position = n + 1;
   for (i = n - 1; i >= position; i--)
        arr[i] = arr[i - 1];
        
        arr[position - 1] = new_num;
        
           for(i = 0; i < n + 1; i++){
        int temp;
        for(int j = i + 1; j < n + 1; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        
            for(i = 0; i < n + 1; i++)      
        printf(" %d ",arr[i]);
        
    return 0;
}
