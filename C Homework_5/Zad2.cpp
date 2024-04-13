#include <stdio.h>

const float PI = 3.14;

void area() {
    double r;
    printf("Enter a radius\n");
    scanf("%lf", &r);
    double result = PI * r * r;
    printf("%f", result);
}

int main() {
    area();

    return 0;
}
