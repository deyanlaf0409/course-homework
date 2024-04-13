#include <stdio.h>
#include <stdlib.h>

typedef struct one{
    int x;
    struct one* p;
}node;




int main() {
int i;
node array[10];
array->x = malloc(10*sizeof(int));
for(i=0;i<10;i++)
{
    array[i].x=i;
}
for(i=0;i<10;i++)
{
    printf("%d",array[i].x);
}
    return 0;
}
