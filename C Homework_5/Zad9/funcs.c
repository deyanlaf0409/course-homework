#include <stdio.h>
#include "prototypes.h"

void add(int a, int b, int c) {
    int sum = a + b + c;
    int multiplier;

    printf("Enter multiplier\n");
    scanf("%d", &multiplier);

    multiply(sum, multiplier);
}
void multiply(int sum, int multiplier) {
    int multiplied = sum * multiplier;
    int divisor;

    printf("Enter divisor\n");
    scanf("%d", &divisor);

    division(multiplied, divisor);
    
}
void division(int multiplied, int divisor) {
    int result = multiplied / divisor;
    printf("End result is %d", result);
}
