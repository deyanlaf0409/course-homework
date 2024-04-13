#include<stdio.h>
int main(){
  int i,f=1,num;
 int *p = &f;       
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
  {
      *p=(*p)*i;
  }
 
  printf("Factorial of %d is: %d",num,*p);
  return 0;
}
