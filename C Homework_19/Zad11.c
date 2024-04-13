#include <stdio.h>

int main()
{
    FILE *fp;
    int count = 0;
    char c; 

    fp = fopen("test.txt", "r");
 
    if (fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
 
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n')
            count = count + 1;
 
    fclose(fp);
    printf("%d lines\n ",count);
 
    return 0;
}
