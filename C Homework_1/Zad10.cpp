#include <stdio.h>

int main() {
    int days,price,broika,num;
    int broika_karavani,broika_kemperi = 3;
    
printf("Kakvo iskate ?\n");
printf("1)Karavana\n");
printf("2)Kemper\n");
printf("(Natisnete 1 ili 2)\n");
scanf("%d",&num);


if(num == 1){
    printf("Kolko karavani iskate? (nalichni 3)\n");
    scanf("%d",&broika);
    if(broika==1)
    {
    printf("Za kolko dni iskate karavanata?\n");
    scanf("%d",&days);
    price = days*90;
    printf("Cenata e :%d",price);
    }
    if(broika==2)
    {
    printf("Za kolko dni iskate karavanite?\n");
    scanf("%d",&days);
    price = days*180;
    printf("Cenata e :%d",price);
    }
    if(broika==3)
    {
    printf("Za kolko dni iskate karavanite?\n");
    scanf("%d",&days);
    price = days*270;
    printf("Cenata e :%d",price);
    }
}

if(num == 2){
    printf("Kolko kemperi iskate? (nalichni 3)\n");
    scanf("%d",&broika);
    if(broika==1)
    {
    printf("Za kolko dni iskate kempera?\n");
    scanf("%d",&days);
    price = days*100;
    printf("Cenata e :%d",price);
    }
    if(broika==2)
    {
    printf("Za kolko dni iskate kemperite?\n");
    scanf("%d",&days);
    price = days*200;
    printf("Cenata e :%d",price);
    }
    if(broika==3)
    {
    printf("Za kolko dni iskate kemperite?\n");
    scanf("%d",&days);
    price = days*300;
    printf("Cenata e :%d",price);
    }
}
}
