#include <stdio.h>

int main() {

float price;
char cart;
char tomatoes = 't';
char flour = 'f';
char yogurt = 'y';
char icecream = 'i';
char candies = 'c';
char lolipops = 'l';

float t = 4.5;
float f = 1.8;
float y = 0.5; 
float i = 0.6;
float c = 1.5;
float l = 0.15;

do{
printf("\n\nProducts:   (To choose product type the code letter in []\n");
printf("[d] Tomatoes, Price:4,5\n");
printf("[f] Flour, Price:1,8\n");
printf("[y] Yogurt, Price:0,5\n");
printf("[i] Ice Cream, Price:0,6\n");
printf("[c] Candies, Price:1,5\n");
printf("[l] Lolipops, Price:0,15\n");

scanf(" %c",&cart);

if(cart=='t'||cart=='f'||cart=='y'||cart=='i'||cart=='c'||cart=='l')
{
    if(cart=='t')
    {
        price+=t;
         printf("\nitem added! total:%.1f$\n",price);
         
    }
    if(cart=='f')
    {
        price+=f;
         printf("\nitem added! total:%.1f$\n",price);
         
    }
    if(cart=='y')
    {
        price+=y;
         printf("\nitem added! total:%.1f$\n",price);
         
    }
    if(cart=='i')
    {
        price+=i;
         printf("\nitem added! total:%.1f$\n",price);
         
    }
    if(cart=='c')
    {
        price+=c;
         printf("\nitem added! total:%.1f$\n",price);
         
    }
    if(cart=='l')
    {
        price+=l;
         printf("\nitem added! total:%.1f$\n",price);
         
    }
}
}
while(price<=100.000); //Tuk ostavame bez nalichnost XD
}
    






