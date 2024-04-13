
#include <stdio.h>

#define swap(t,x,y) (t=x, x=y, y=t)



int main() {
    int a = 5;
    int b = 1;
    int temp;
    
    swap(temp,a,b);
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}
