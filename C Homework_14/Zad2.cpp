#include <stdio.h>
#include <string.h>

typedef enum{
    Number = 1,
    String = 2,
}eenum;


union data{
    int x;
    char str[10];
    eenum choice; 
};


void display(union data *user)
{
    int answer;
    puts("Enter1 or 2:");
    scanf("%d",&answer);
    if(answer==Number)
    {
    user->x = 5;
    printf("%d\n",user->x);
    }
    else{
   strcpy(user->str,"hello");
     printf("%s\n",user->str);
    }
}

int main() {
union data user;
display(&user);

    return 0;
}
