 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 2

 typedef enum {
    Heads = 1,
    Tails = 2,
}eenum;

struct student {
    int num;
    char string[10];
    double marks;
    eenum coin;
} s[size];

int main() {
    int i;
    int r;
    srand(time(NULL));
    // storing information
    for (i = 0; i <size; ++i) {
        printf("\nEnter int,\n");
        scanf("%d",&s[i].num);
        printf("Enter string: ");
        scanf("%s", s[i].string);
        printf("Enter double: ");
        scanf("%lf", &s[i].marks );
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for (i = 0; i < size; ++i) {
printf("Int: %d\n",s[i].num); 
printf("string: %s\n",s[i].string);
printf("Double: %lf\n",s[i].marks);
    r = rand() % (2 + 1 - 1) + 1 ;
    if(r==1)
    {
        r = Heads;
    }
    else{
       r = Tails;
    }
switch(r)
{
    case Heads:
    printf("Heads!\n");
    break;
    case Tails:
    printf("Tails!\n");
    break;
}

}
 return 0;
}
