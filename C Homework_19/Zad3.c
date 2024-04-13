#include <stdio.h>

int main()
{
    char *file = "test.txt";
    FILE *fileptr = fopen(file, "r");
    if (fileptr == NULL)
    {
        printf("File not opened");
    }
    char c;
    while ((c = fgetc(fileptr)) != EOF)
    {
    	putchar(c);
	}
        
    fclose(fileptr);

    return 0;
}
