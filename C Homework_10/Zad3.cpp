#include <stdio.h>
#include <string.h>

int main() {

    char str[4];
    printf("Enter a word: ");
    fgets(str, sizeof str, stdin);
   // printf("%c",str);
    
  int x = strlen(str)- 1;
  
  for(char *ptr = &str[x];ptr >= &str[0];ptr--)
  {
      printf("%c",*ptr);
  }
   printf("\n");
   char *p_l;
   char *p_r;
   p_l = &str[0];
   p_r = &str[x];
   while(p_r>p_l)
   {

       if(*p_l != *p_r)
       {
           
           printf("\nstring is not palindrome");
           return 0;
       }
       p_l++;
       p_r--;
   }
    printf("\nstring is a palindrome");
}
