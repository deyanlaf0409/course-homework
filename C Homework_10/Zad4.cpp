#include <stdio.h>

#define size 3
int SumArray(int *ptr);

int main()
{
int arr[size] = {1,2,3};
printf("Sum is: %d",SumArray(arr));
return 0;
}
int SumArray(int *ptr)
{
    int sum = 0;
    for(int i =0;i<size;i++)
    {
        sum = sum + *(ptr + i);
    }
    return sum;
}
