
#include <stdio.h>

int main() {
int arr1[5] ={1,2,3,4,5};
int arr2[5];

int *p1 =arr1;
int *p2 = arr2;

for(p1 =&arr1[0];p1<&arr1[5];p1++)
{
    *p2 = *p1;
    p2++;
}
for(p2 =&arr2[0];p2<&arr2[5];p2++)
{
    printf("%d",*p2);
}
   return 0;
}
