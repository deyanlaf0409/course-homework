#include <stdio.h>


void Sum(int x,int y,int z) {
int Sum;
Sum = x*2 + y*z;
printf("Sum is: %d",Sum);
}

int main() {
    int a,b,c;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);
Sum(a,b,c);
}
