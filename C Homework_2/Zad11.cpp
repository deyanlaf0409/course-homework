#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[10] = "Hello";
    char rts[10];
    strcpy(rts,str);
    strrev(rts);
    printf ("%s",rts);  
    return 0;  
}
