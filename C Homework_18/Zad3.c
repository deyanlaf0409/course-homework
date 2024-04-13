
#include <stdio.h>

typedef int* pointer ;
int main() {
   int a = 5;
   pointer p = NULL;
   p = &a;
    printf("%d",*p);

    return 0;
}
