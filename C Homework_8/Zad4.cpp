
#include <stdio.h>
#include <string.h>

void copy(char* to, char* from)
{
while(*(++to));
{
    while(*(to++) = *(from++));
}
}

int main()
{
	char s1[] = "Hi,";
	char s2[] = "string";
	copy(s1,s2);
printf("%s",s1);
	return 0;
}
