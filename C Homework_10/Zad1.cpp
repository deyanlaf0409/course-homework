
#include <stdio.h>

#define size 20
int main() {
    int sum = 0;
int arr[size];

for(int i=0;i<size;i++)
{
    printf("Add [%d] element:",i);
    scanf("%d",&arr[i]);
}

for(int *ptr=&arr[1];ptr < &arr[size];ptr+=2)
{
 
    sum += *ptr;
  
}
    printf("%d",sum);
    return 0;
}
