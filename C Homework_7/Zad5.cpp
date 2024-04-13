
#include <stdio.h>

int main() {

int arr1[4] = {6,4,8,2};
int arr2[4] = {9,3,7,1};
int result_arr[8] = {};

   for(int i = 0; i < 4; i++)
       result_arr[i] = arr1[i];
    for(int i = 0; i < 4; i++)     
        result_arr[i + 4] = arr2[i];

    printf("The merged array: ");
    for(int i = 0; i < 8; i++)
        printf("%d ", result_arr[i]);
        
         printf("\nResult array after sorting: ");
    for(int i = 0; i < 8; i++){
        int temp;
        for(int j = i + 1; j < 8; j++) {
            if(result_arr[i] < result_arr[j]) {
                temp = result_arr[i];
                result_arr[i] = result_arr[j];
                result_arr[j] = temp;
            }
        }
    }   
    for(int i = 0; i < 8 ; i++)      
        printf(" %d ",result_arr[i]);
    return 0;
}
