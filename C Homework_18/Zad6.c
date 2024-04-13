#include <stdio.h>
#include <stdlib.h>

struct Point{
  char* string;
  int y;
};
typedef struct Point key_t;

int main() {
key_t p1;
p1.string = (char*)malloc(10*sizeof(char));
if(p1.string==NULL)
{
	printf("Dead");
}
p1.string = "Hello";
p1.y = 5;

    printf("%s \n", p1.string);
    printf("%d \n", p1.y);
    free(p1.string);
    return 0;
}
