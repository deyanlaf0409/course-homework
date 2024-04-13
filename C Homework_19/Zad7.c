#include<stdio.h>
int main()
{
    
    char str[50];
   
    FILE *fptr = fopen("test.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
   
        puts("Enter a name");
        scanf("%[^\n]%*c", str);
        fprintf(fptr,"%s\n", str);
    
    fclose(fptr);
   
    return 0;
}
