#include <stdio.h>
#include <stdlib.h>


int *MakeArray(size_t n, int **ptr)
{
    if(ptr)
    {
        *ptr = malloc(n*sizeof(int));
        if(!*ptr)
        {
            puts("Allocation failed");
        }
    }
    return *ptr;
}


int *ReAllocArray(size_t n, int **ptr)
{
    int *tmp = NULL;
    if(ptr)
    {
        tmp = realloc(*ptr,n * sizeof(int));
        if(!tmp)
        {
            puts("Reallocation failed");
        }
        else
        {
            *ptr = tmp;
        }
    }
    return tmp;
}


int main() {
    int n,i;
    int *ptr=NULL;
    puts("Enter size of n");
    scanf("%d",&n);
MakeArray(n,&ptr);
    puts("Entering even number is increasing the size of the array by 1");
    for( i =0;i<n;++i)
    {
        scanf("%d",&ptr[i]);
        if(ptr[i]%2==0)
        {
            ++n;
            ReAllocArray(n,&ptr);
        }
    }
    puts("Your array is:");
    for(i =0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
    free(ptr);
    return 0;
}
