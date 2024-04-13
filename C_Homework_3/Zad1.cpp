#include <stdio.h>

int main()
{
    float principle, time, rate, SI;

    
    printf("Vuvedi suma: ");
    scanf("%f", &principle);

    printf("Vuvedi period: ");
    scanf("%f", &time);

    printf("Vuvedi lihva: ");
    scanf("%f", &rate);

   
    SI = (principle * time * rate) / 100;

    
    printf(" = %f", SI);

    return 0;
}
