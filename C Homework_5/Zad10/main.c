#include <stdio.h>
#include "prototypes.h"



int main() {
    unsigned a;
    unsigned b;

    printf("Set unsigned a for NOK\n");
    scanf("%u", &a);
    printf("Set unsigned b for NOK\n");
    scanf("%u", &b);

    printf("%u", nok(a, b));

    float toAbs;
    printf("\nType a number to return absolute\n");
    scanf("%f", &toAbs);
    printf("%f", absolute(toAbs));

    float sqrR;
    printf("\nNum to find square root on\n");
    scanf("%f", &sqrR);
    printf("\nSquare root is: %f", squareRoot(sqrR));

    return 0;
}
