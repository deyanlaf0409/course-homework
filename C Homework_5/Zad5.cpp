#include <stdio.h>


void Check(int x) {
  if(x % 2 == 0)
        printf("%d is even.", x);
    else
        printf("%d is odd.", x);
}

int main() {
int a;
printf("Enter number");
scanf("%d",&a);
Check(a);
}
