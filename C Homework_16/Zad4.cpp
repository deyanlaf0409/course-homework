#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size = 2;
    char c;
    char* buffer = NULL;
    buffer = (char*) malloc(size*sizeof(char));
    if(buffer==NULL)
    {
        puts("Allocation failed");
    }

    printf("Enter character: ");
    while(c=getchar()!=EOF)
    {
        *buffer = c;
        size++;
        buffer = (char*) realloc(buffer,size*sizeof(char));
         if(buffer==NULL)
    {
        puts("Allocation failed");
    }
    }

    free(buffer);
    

}
