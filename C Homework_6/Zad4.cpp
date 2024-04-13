#include <stdio.h>

int main() {
int n = 10;
int arr[10] = {};
int i,temp;

printf("Enter array elements: \n");
for(i=0;i<n;i++)
{
    printf("Array element %d :",i);
    scanf("%d", &arr[i]);
}
printf("Your array is :\n");
for(i=0;i<n;i++)
{
      printf("%d ",arr[i]);
}

for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\nReversed :\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
