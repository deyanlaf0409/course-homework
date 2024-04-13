#include<stdio.h>
int main()
{
  int arr[5],max,min,*p,i,size;
  p=arr;
  printf("enter the size of array:");
  scanf("%d",&size);
  printf("enter the numbers:");
  for(i=0;i<size;i++)
  { 
      scanf("%d",(p+i)); 
  }
  max=*p;
  min=*p;
  for(i=0;i<size;i++)
  {
    if(*(p+i)>max)
    {  
        max=*(p+i); 
    }
    if(*(p+i)<min)
    { 
        min=*(p+i);
    }
  }
  printf(" maximum is %d and minimum is %d",max,min);
  return 0;
}
