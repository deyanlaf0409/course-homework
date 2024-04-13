#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int arr[20] = {};
    int i;
    srand(time(0));

    for( i = 0 ; i < 20; i++ ) {
        arr[i] = (rand() % 100);
        printf("%d ", arr[i]);
    }

    int largestNum = -1;
    
    for (i = 0; i < 20; i++)
    {
        if(arr[i] > largestNum) {
            largestNum = arr[i];
        }
    }

    printf("\nLargest number is: %d", largestNum);
    
   
    return 0;
}
