#include <stdio.h>

typedef struct{
    unsigned int d;
    unsigned int m;
    unsigned int y;
}date;
 
 void displayDate(date dt)
 {
    printf("Size of date is %lu bytes\n",sizeof(date));
    printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
 }
 
  void CheckDate(date dt)
  {
        //check year
    if(dt.y>=1900 && dt.y<=9999)
    {
        //check month
        if(dt.m>=1 && dt.m<=12)
        {
            //check days
            if((dt.d>=1 && dt.d<=31) && (dt.m==1 || dt.m==3 || dt.m==5 || dt.m==7 || dt.m==8 || dt.m==10 || dt.m==12))
                printf("\nDate is valid.\n");
            else if((dt.d>=1 && dt.d<=30) && (dt.m==4 || dt.m==6 || dt.m==9 || dt.m==11))
                printf("\nDate is valid.\n");
            else if((dt.d>=1 && dt.d<=28) && (dt.m==2))
                printf("\nDate is valid.\n");
            else if(dt.d==29 && dt.m==2 && (dt.y%400==0 ||(dt.y%4==0 && dt.y%100!=0)))
                printf("\nDate is valid.\n");
            else
                printf("\nDay is invalid.\n");
        }
        else{
            printf("\nMonth is not valid.\n");
        }
    }
    else{
        printf("\nYear is not valid.\n");
    }
}
  
int main()
{
   date dt = { 10, 10, 2022 };;
displayDate(dt);
CheckDate(dt);
}
