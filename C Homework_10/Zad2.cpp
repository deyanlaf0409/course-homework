#include <stdio.h>

int main() {

    char str[100] = {};
    printf("Enter a word: ");
    fgets(str, sizeof str, stdin);
   // printf("%c",str);
    
  int x = sizeof(str);
  
  for(char *ptr = &str[x-1];ptr >= &str[0];ptr--)
  {
      printf("%c",*ptr);
  }
   
}
