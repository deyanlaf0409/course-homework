#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int first, diff, terms, value, sum=0, i;
 
    printf("Vuvedi golemina na progresiqta\n");
    scanf("%d", &terms);
 
    printf("Vuvedi purvoto chislo i razlikata mejdu elementite\n");
    scanf("%d %d", &first, &diff);
 

    value = first;
    printf("AP \n");
    for(i = 0; i < terms; i++) {
        printf("%d ", value);
        sum += value;
        value = value + diff;
    }
 
 return 0;
}
