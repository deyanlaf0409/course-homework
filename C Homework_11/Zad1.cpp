
#include <stdio.h>

int main() {
int arr[5] ={1,2,3,4,5};

for(int *p=&arr[0];p<&arr[5];p++)
{
printf("%d",*p);
}
   return 0;
}
