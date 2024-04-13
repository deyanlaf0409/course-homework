#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int first, ratio, terms, value, sum=0, i;
 
    printf("Vuvedi golemina na redicata\n");
    scanf("%d", &terms);
 
    printf("Vuvedi purviq element i chastnoto\n");
    scanf("%d %d", &first, &ratio);
 
    value = first;
    printf("GP SERIES\n");
    for(i = 0; i < terms; i++) {
        printf("%d ", value);
        sum += value;
        value = value * ratio;
    }
 
 return 0;
}
