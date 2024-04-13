#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000];
    
    FILE *stream;
    stream = fopen("test.txt","r");
    if(stream==NULL)
    {
        printf("File not opened");
        return 1;
    }

   if( fgets (str, 1000, stream)!=NULL ) {
      puts(str);
   }
   fclose(stream);

    return 0;
}
