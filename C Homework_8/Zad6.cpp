#include <stdio.h>

int Func_1to30()
{
static int i = 1;
static int sum = 1;
while(i<30)
{
    sum *=(++i);
   return Func_1to30();
}
printf("%d",sum);
}

int main()
{
Func_1to30();
}
