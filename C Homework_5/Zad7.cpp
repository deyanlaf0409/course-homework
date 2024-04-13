#include <stdio.h>

void triangleS(double a, double b);
void squareS(double a, double b);

int main() {
int a,b;
printf("Add a \n");
scanf("%d", &a);
printf("Add b \n");
scanf("%d", &b);
    triangleS(a, b);
    squareS(a, b);

    return 0;
}

void triangleS(double a, double b) {
    double result = a * b / 2;
    printf("S of right-angled triangle is: %lf\n", result);
}

void squareS(double a, double b) {
    double result = a * b;
    printf("S of square is: %lf", result);
}
