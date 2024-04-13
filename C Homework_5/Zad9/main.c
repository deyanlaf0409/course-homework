#include <stdio.h>
#include "prototypes.h"


int main() {
    int a;
    int b;
    int c;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    add(a, b, c);

    return 0;
}
