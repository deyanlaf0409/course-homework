#include <stdio.h>

float pi = 3.14;

float Circle_Area(float pi,float r);

int main() 
{
float radius;
printf("Enter the radius of circle : \n");
   scanf("%f", &radius);
Circle_Area(pi,radius);

}

float Circle_Area(float pi,float r)
{
    int S;
    S = pi * (r * r);
    printf("Circle Area: %d",S);
}
