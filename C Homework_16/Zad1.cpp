#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n,sum = 0;
    puts("Enter array size n: ");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        puts("Memory allocation failed");
    }
    puts("Enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
        sum += ptr[i];
    }
printf("Sum: %d",sum);
free(ptr);
    return 0;
}
