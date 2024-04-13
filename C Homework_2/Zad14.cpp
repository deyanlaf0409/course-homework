#include <stdio.h>  

int x;

void test();

int main()  
{  
    x = 0;
    while(x<3){
    test();
    printf("%d\n",x);
    }

}

void test()
{
    x++;
}
