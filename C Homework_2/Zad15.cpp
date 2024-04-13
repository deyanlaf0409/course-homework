#include <stdio.h>  

void test(int*i);

int main()  
{  
   int x = 0;
    while(x<3)
	{
    test(&x);
    printf("%d\n",x);
    }

}

void test(int *i)
{
    (*i)++;

}
