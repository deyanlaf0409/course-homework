#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Watermelon{
    
    int diameter;
    float thickness;
};

int main()
{
    srand(time(NULL));
int A,B,i;
float bef_avarage_mel=0,bef_avarage_pum=0;
float avarage_melon=0,avarage_pumkin=0;

printf("Enter A:");
scanf("%d",&A);

struct Watermelon melon[A];

for(i=0;i<A;i++)
{
    melon[i].diameter = rand()% (140 + 1 - 15) + 15;
    melon[i].thickness = ((float)rand()/RAND_MAX)* 3.5 + 0.5;
    bef_avarage_mel = melon[i].diameter + melon[i].thickness;
}
    avarage_melon = bef_avarage_mel /A;
    
printf("Enter B:");
scanf("%d",&B);

struct Watermelon pumkin[B];
for(i=0;i<B;i++)
{
    pumkin[i].diameter = rand()% (95 + 1 - 35) + 35;
    pumkin[i].thickness = ((float)rand()/(RAND_MAX))* 3.5 + 0.5;
    bef_avarage_pum = pumkin[i].diameter+pumkin[i].thickness;
}
avarage_pumkin = bef_avarage_pum/B;

printf("%f\n",avarage_melon);
printf("%f\n",avarage_pumkin);


    return 0;
}
