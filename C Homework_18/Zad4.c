#include <stdio.h>

typedef int (*func_pointer)(int, int);

Add(int a ,int b)
{
    int sum;
    sum = a+b;
    printf("%d",sum);
}

Substract(int a ,int b)
{
    int sum;
    sum = a-b;
    printf("%d",sum);
}

Divide(int a ,int b)
{
    int sum;
    sum = a/b;
    printf("%d",sum);
}

Multiply(int a ,int b)
{
    int sum;
    sum = a*b;
    printf("%d",sum);
}

int main() {
    func_pointer p =&Multiply;
    p(5,5);
}
