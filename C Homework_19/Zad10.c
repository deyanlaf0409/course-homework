#include <stdio.h>
  
int main()
{
	char c;
    FILE *fp;
    fp = fopen("test.txt", "r");
      
    fseek(fp, 7, SEEK_SET);
      

    printf("%ld", ftell(fp));
        do {
        c = fgetc(fp);
        printf("%c", c);
 
    } while (c != EOF);
    return 0;
}
