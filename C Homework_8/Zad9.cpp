
#include <stdio.h>

int get_line(char s[],int lim)
{
    if(*s=='\n')
    {
        return lim;
    }
    lim++;
    get_line(s + 1,lim);


}


int main() {
char str[] = "This string!\n";
int x=0;
int length = get_line(str,x);
printf("%d",length);
    return 0;
}
