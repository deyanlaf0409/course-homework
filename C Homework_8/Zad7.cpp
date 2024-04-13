
#include <stdio.h>
#include <string.h>


void reverse(char src[],char dest[])
{
 int x,i,j;
x =strlen(src);
	for(i=0;i<x;i++)
	{
	
	(dest[i])= (src[i]);
}
 strrev(dest);
}

int main()
{
  char str1[] = "This string!";
  char str2[30] = {};
  reverse(str1,str2);
  printf("Source: %s\n",str1);
  printf("Destination: %s",str2);
}
