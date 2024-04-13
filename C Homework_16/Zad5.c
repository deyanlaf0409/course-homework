#include <stdio.h>
#include <stdlib.h>

int* CallocFunc(int n,int size)
{
return calloc(n,sizeof(size));
}


int main() {
int *ptr = CallocFunc(5,5);
int i;
for(i=0;i<5;i++)
{
printf("%d",ptr[i]);
}
free(ptr);
    return 0;
}
