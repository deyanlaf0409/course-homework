#include <stdio.h>

int main() 
{
    const int size =10;
    int i;
 int a[size] = {1,2,3,4,5,6,7,8,9,10};
 int b[size];
 int *ptr = a;
 int *ptr2 = b;
 
for(i=0;i<size;i++)
{
    *ptr2 = *ptr;
    ptr++;
    ptr2++;
}

for(i=0;i<10;i++)
{
    printf("%d  ",b[i]);
}
}
