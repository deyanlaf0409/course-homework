#include <stdio.h>

int main() {
    int i;
int arr1[4] = {};
int arr2[4] = {};

for(i=0;i<4;i++)
{
    printf("Enter %d element of array:",i);
    scanf("%d", &arr1[i]);
    arr2[i] = arr1[i]*2;
}
 printf("Array 2 : \n");
for(i=0;i<4;i++)
{
    printf("%d",arr2[i]);
}

    return 0;
}
