#include <stdio.h>

#define DEBUG 5

int main()
{
   #if DEBUG <= 10
   printf("DEBUG LOWER THAN 10\n");
   #elif DEBUG > 10
   printf("DEBUG HIGHER THAN 10\n", DEBUG);
   #endif

   return 0;
}
