#include <stdlib.h>
#include <stdio.h>

int* Realloc(int size,int *ptr)
{
   return (int*)realloc(ptr,size*sizeof(int));
}

int main() {
int n,i;
puts("Enter memory space: ");
scanf("%d",&n);
int *ptr =NULL;
ptr = malloc(n*sizeof(int));
if(ptr==NULL)
{
    puts("Memory allocation failed");
}
for(i=0;i<n;i++)
{
    printf("%d",ptr[i]);
}


puts("\nEnter new memory space: ");
scanf("%d",&n);
ptr = Realloc(n,ptr);

for(i=0;i<n;i++)
{
    printf("%d",ptr[i]);
}
free(ptr);
    return 0;
}
