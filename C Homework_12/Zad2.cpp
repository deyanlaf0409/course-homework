
#include <stdio.h>
#include <stdlib.h>

typedef int (*Fptr) (int, int);

int fnMultiply(int nA, int nB)
{
    return(nA * nB);
}

int fnDivision(int nA, int nB)
{
    return(nA / nB);
}

int fnPlus(int nA, int nB)
{
    return(nA + nB);
}

int fnMinus(int nA, int nB)
{
    return(nA - nB);
}


int main(int argc,char* argv[]) 
{
    Fptr p = NULL;
    switch(2)
    {
        case '+':p = fnPlus;break;
        case '-': p = fnMinus;break;
        case '*':p = fnMultiply;break;
        case '/':p = fnDivision;break;
        default :
        p = NULL;
    }
    printf("%d\n", p(5,5));
    return 0;
}
