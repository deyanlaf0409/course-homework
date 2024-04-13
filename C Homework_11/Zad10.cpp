#include <stdio.h>
#include <string.h>
int main(void)
{
char str[30];

printf("Enter string: ");
scanf("%[^\n]%*c",str);
int x =strlen(str);

char *p1 = str;
char *p2 = &str[x-1];
char *p3 = &str[x-1];
char temp;

while(p1<=p2)
{
    temp =  *p1;
  *p1 = *p2;
  *p2 =temp;
p1++;
p2--;
}

for(p1 =str;p1<=p2;p1++)
{
printf("%c",*p1);
}
    return 0;
}
