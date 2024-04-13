#include <stdio.h>

void swap(int *a,int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
 int a = 15;
 int b = 7;
 puts("Before swap :");
 printf("%d, %d\n",a,b);
 
 swap(&a,&b);
 puts("After swap");
  printf("%d, %d\n",a,b);
    return 0;
}
