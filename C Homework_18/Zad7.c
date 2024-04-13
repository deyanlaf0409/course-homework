#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char* string;
  int* y;
}key;


int main() {
key key_tab[3];
int i;
for(i=0;i<3;i++)
{
    printf("Enter elements of struct %d\n",i +1);          //Storing
    key_tab[i].string = malloc(10*sizeof(char));
    if(key_tab[i].string == NULL)
    {
        printf("Game over");
    }
    scanf("%s",key_tab[i].string);
    key_tab[i].y = malloc(1*sizeof(int));
        if(key_tab[i].y == NULL)
    {
        printf("Game over");
    }
    scanf("%d",&key_tab[i].y);    
}

for(i=0;i<3;i++)                                   //Printing
{
 printf("\n%s\n",key_tab[i].string);
 printf("%d\n",key_tab[i].y);
}

for(i=0;i<3;i++)                       //Free?
{
    free(key_tab[i].string);
    free(key_tab[i].y);
}
    return 0;
}
