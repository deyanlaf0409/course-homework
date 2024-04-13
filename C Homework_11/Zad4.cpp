#include <stdio.h>
#define size 4
int main() {
int arr[size] ={1,2,3,4};

int *p1 = arr;
int *p2 = &arr[size - 1];
int temp;
while(p1<=p2)
{
    temp =  *p1;
  *p1 = *p2;
  *p2 =temp;
p1++;
p2--;
}



printf("Array : \n");
for(p1 = &arr[0];p1<=&arr[size - 1];p1++)
{
    printf("%d",*p1);
}

   return 0;
}
