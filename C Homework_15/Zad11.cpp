#include <stdio.h>
#include <math.h>

#define A 2
#define B 4
#define C 3.0
#define AVG(x,y) (float)(x+y)/2
#define POW(x,y) P
#define TOUPPER(x) (('a' <= (x) && (x) <= 'z') ? ((x - 'a') + 'A') : (x))
#define DISP(f,x) printf("\nsqrt =(%f)  x = %f",sqrt(x),x);
#define sqrt(x) (double)((x)*(x))
int main() {

printf("%.1f",AVG(5,4));            // 1


if(A<=5.0&&A>0 && B<=5.0&&B>0) 
{
    printf("\n%.1f",AVG(A,B));
}
else{
    puts("\nInvalid numbers");     // 2
}

int P = pow(A,B);    
printf("\n%d",POW(A,B));          // 3

printf("\n%c",TOUPPER('a'));      //4

DISP(sqrt(C),C);                  //5



    return 0 ;
}
