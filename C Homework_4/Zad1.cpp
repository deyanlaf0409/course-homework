#include <stdio.h>

int main () {

   int count = 0;
 
   printf("Enter character: \n");
  while(getchar() != '\n')
  {
      count++;
  }
    printf("%d", count);

   return(0);
}
