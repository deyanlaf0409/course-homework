#include <stdio.h>
 
void Function(int *a, float *b, char *c)
{
    *a = 69;
    *b = 3.14;
    *c = 'B';
}
 
int main(void)
{
    int a = 0;
    float b = 0;
    char c = 'A';
 
    Function(&a, &b, &c);
    printf("a = %d, b = %.2f, c = %c", a, b, c);
 
    return 0;
}
