#include <stdio.h>
#define max(a,b)\
({typeof(a)_a =(a);\
    typeof(b)_b =(b);\
    _a>_b ?_a:_b;})
int main() {
printf("%d\n", max(3,2));
    return 0;
}
