#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n,sum = 0;
    puts("Enter array size n: ");
    scanf("%d",&n);
    int *ptr = (int*) malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        puts("Memory allocation failed");
    }
   n = n + 2;
    puts("Size of array is incremented by (+2)");
    puts("Enter array elements");
    ptr = (int*) realloc(ptr,n*sizeof(int));
       for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
        sum += ptr[i];
    }
printf("Sum: %d",sum);
free(ptr);
    return 0;
}
