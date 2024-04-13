#include <stdlib.h>
#include <stdio.h>


int main() {
int n,n2,i;
puts("Enter array size: ");
scanf("%d",&n);
int *ptr =NULL;
ptr = malloc(n*sizeof(int));
if(ptr==NULL)
{
    puts("Memory allocation failed");
}
for(i=0;i<n;i++)
{
    printf("Enter array element[%d]",i);
    scanf("%d",&ptr[i]);             //Fill first array
}
puts("User Array: ");
for(i=0;i<n;i++)
{
    printf("%d",ptr[i]);           //Print first array
}
puts("\nEnter new array size: ");
scanf("%d",&n2);
ptr = realloc(ptr,n*sizeof(int));
if(ptr==NULL)
{
    puts("Memory allocation failed");
}
for(i=n;i<n2;i++)
{
    printf("Enter array element[%d]",i);
    scanf("%d",&ptr[i]);             //Fill second array
}
puts("Admin Array: ");
for(i=0;i<n2;i++)
{
    printf("%d",ptr[i]);           //Print final array
}
free(ptr);
    return 0;
}
