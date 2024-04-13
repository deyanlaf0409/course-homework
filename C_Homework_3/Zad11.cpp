#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num, j, flag;
 
    printf("Vuvedi chislo \n");
    scanf("%d", &num);
 
    if (num <= 1)
    {
        printf("%d ne e prosto chislo \n", num);
        exit(1);
    }
    flag = 0;
    
    for (j = 2; j <= num / 2; j++)
    {
        if ((num % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d E prosto chislo \n", num);
     else
        printf("%d ne e prosto chislo \n", num);
}
