
#include <stdio.h>

int main() {
int arr1[5] ={1,2,3,4,5};
int arr2[5] ={6,7,8,9,10};

int *p1 =arr1;
int *p2 = arr2;
int temp;

while(p1 <= &arr1[5] && p2 <= &arr2[5])
{
    temp = *p1;
    *p1 = *p2; 
    *p2 = temp;
    p1++;
    p2++;
}

printf("Array 1: \n");
for(p1 = &arr1[0];p1<&arr1[5];p1++)
{
    printf("%d",*p1);
}
printf("\nArray 2: \n");
for(p2 = &arr2[0];p2<&arr2[5];p2++)
{
    printf("%d",*p2);
}
   return 0;
}
