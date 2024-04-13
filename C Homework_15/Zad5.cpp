#include <stdio.h>

#define DEBUG 

int main() 
{
   #ifdef DEBUG
printf("IF you read this ,DEBUG is alive!");
#endif

 return 0;
}
