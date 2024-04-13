#include <stdio.h>

int main() {
    int days1,days2,price1,price2,broika,num;
    char choice;
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
    scanf("%d",&days1);
    price1 = days1*90;
    printf("Cenata e :%d",price1);
    }
    if(broika==2)
    {
    printf("Za kolko dni iskate karavanite?\n");
    scanf("%d",&days1);
    price1 = days1*180;
    printf("Cenata e :%d",price1);
    }
    if(broika==3)
    {
    printf("Za kolko dni iskate karavanite?\n");
    scanf("%d",&days1);
    price1 = days1*270;
    printf("Cenata e :%d",price1);
    }
    
    
    
    printf("\nIskate li oshte nalichni produkti? (Y/N)"); //Klienta si e izbral, pitam dali iska oshte neshta
    scanf("\n%c", &choice);
    
    
    
     if(choice=='y') //Ako iska suotvetno se predlaga drugiq nalichen produkt
     {
        printf("Kolko kemperi iskate? (nalichni 3)\n");
    scanf("%d",&broika);
    if(broika==1)
    {
    printf("Za kolko dni iskate kempera?\n");
    scanf("%d",&days2);
    price2 = (days2*100)+price1;
    printf("Kraina suma :%d",price2);
    }
    else if(broika==2)
    {
    printf("Za kolko dni iskate kemperite?\n");
    scanf("%d",&days2);
    price2 = (days2*200)+price1;
    printf("Kraina suma :%d",price2);
    }
   else if(broika==3)
    {
    printf("Za kolko dni iskate kemperite?\n");
    scanf("%d",&days2);
    price2 = (days2*300)+price1;
    printf("Kraina suma :%d",price2);
    }
    
    }
     else if(choice=='n') //Ako ne iska drugo -lek den i ostava purvonachalnata cena 
     {
        printf("\nBlagodarim che pazaruvahte!");
        printf("Kraina suma :%d",price1);
     }
}


if(num == 2){
    printf("Kolko kemperi iskate? (nalichni 3)\n");
    scanf("%d",&broika);
    if(broika==1)
    {
    printf("Za kolko dni iskate kempera?\n");
    scanf("%d",&days2);
    price2 = days2*100;
    printf("Cenata e :%d",price2);
    }
    else if(broika==2)
    {
    printf("Za kolko dni iskate kemperite?\n");
    scanf("%d",&days2);
    price2 = days2*200;
    printf("Cenata e :%d",price2);
    }
   else if(broika==3)
    {
    printf("Za kolko dni iskate kemperite?\n");
    scanf("%d",&days2);
    price2 = days2*300;
    printf("Cenata e :%d",price2);
    }



    printf("\nIskate li oshte nalichni produkti? (Y/N)"); //Sushtata shema kato po gore
    scanf("\n%c", &choice);
    
    
    
     if(choice=='y')
     {
        printf("Kolko karavani iskate? (nalichni 3)\n");
    scanf("%d",&broika);
    if(broika==1)
    {
    printf("Za kolko dni iskate karavanata?\n");
    scanf("%d",&days1);
    price1 = (days1*90)+price2;
    printf("Kraina suma :%d",price1);
    }
    if(broika==2)
    {
    printf("Za kolko dni iskate karavanite?\n");
    scanf("%d",&days1);
    price1 = (days1*180)+price2;
    printf("Kraina suma :%d",price1);
    }
    if(broika==3)
    {
    printf("Za kolko dni iskate karavanite?\n");
    scanf("%d",&days1);
    price1 = (days1*270)+price2;
    printf("Kraina suma :%d",price1);
    }
    
    }
     else if(choice=='n')
     {
        printf("\nBlagodarim che pazaruvahte!");
        printf("Kraina suma :%d",price2);
     }
}
}





    








