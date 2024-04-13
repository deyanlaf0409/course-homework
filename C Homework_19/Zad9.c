#include<stdio.h>
 
int main()
{
fpos_t position;
    FILE *fp = fopen("test.txt","r");
 
    char string[20];  
    fscanf(fp,"%s",string);
  printf("%s",string);
 fgetpos(fp, &position);
  printf("%ld", position);
  
    fscanf(fp,"%s",string);
  printf("%s",string);
  fgetpos(fp, &position);
    printf("%ld", position);
    
    return 0;
}
