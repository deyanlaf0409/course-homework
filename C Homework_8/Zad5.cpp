
#include <stdio.h>
#include <string.h>

void Func_1to30()
{
    long result = 1;
for(int i = 1; i <= 30;++i){
     result *= i;
    printf("%ld",result);
}
}

int main()
{
Func_1to30();

}
