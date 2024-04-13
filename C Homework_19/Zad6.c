#include <stdio.h>
 

int main()
{
    FILE* ptr = fopen("test.txt", "r");
    if (ptr == NULL) {
        printf("Error");
        return 1;
    }
 
    char buf[100];
    fscanf(ptr,"%[^\n]s" , buf);
    printf("%s", buf);

    return 0;
}
