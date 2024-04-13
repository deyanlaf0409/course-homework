#include <stdio.h>

void print_str(char *p)
{
if(*p =='\0')
{
    return ;
}
printf("%c ",*p);
print_str(p + 1);
}

int main() {
print_str("hi , string");
    return 0;
}
