
#include <stdio.h>

int Face_Circle(float* p,float* r);

 float PI = 3.14159;

int main() {
    
 float radius1 = 1;
 Face_Circle(&PI,&radius1);
 float radius2 = 1.5;
 Face_Circle(&PI,&radius2);
 float radius3 = 13;
 Face_Circle(&PI,&radius3);
}

int Face_Circle(float* p,float* r)
{
    float S;
    S = (*p)*(*r)*(*r);
    printf("S = %.3f\n",S);
}

