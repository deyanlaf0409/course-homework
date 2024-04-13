#include <stdio.h>

  typedef int List[10];
  
int main() {
List x;
int i;

for(i=0;i<10;i++)
{
    x[i]=i;
}

for(i=0;i<10;i++)
{
    printf("%d",x[i]);
}
}
