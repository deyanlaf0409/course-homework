#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000];
    int c;
    FILE *stream;
    FILE *stream2;
    stream = fopen("test.txt","r");
    if(stream==NULL)
    {
        printf("File not opened");
        return 1;
    }

    stream2 = fopen("test2.txt","w");
    if(stream2==NULL)
    {
        printf("File not opened");
        return 2;
    }
    
while ((c = getc(stream)) != EOF) {
    putc(c,stream2);
}
    
   fclose(stream);
   fclose(stream2);
  
    return 0;
}
