#include <stdio.h>

int main() 
{
    int i;
 int arr[10] = {100,90,80,70,60,50,40,30,20,10};
 int *ptr = arr;
*(ptr+2) = 5;
*(ptr+3) = 33;
*(ptr+4) -= 7;
*(ptr+6) += 10;
*(ptr+9) *= 3;

for(i=0;i<10;i++)
{
    printf("%d  ",arr[i]);
}
}
