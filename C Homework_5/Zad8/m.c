#include <stdio.h>
#include "f.h"



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

    int addRes = add(a, b);
    int incrRes = incr(c);

    printf("Add result: %d\n", addRes);
    printf("incr result: %d", incrRes);

    return 0;
}
