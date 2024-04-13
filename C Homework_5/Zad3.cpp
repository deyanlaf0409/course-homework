#include <stdio.h>


void Sum(int x,int y) {
int Sum;
Sum = (x + y)*4;
printf("Sum is: %d",Sum);
}

int main() {
    int a,b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
Sum(a,b);
}
