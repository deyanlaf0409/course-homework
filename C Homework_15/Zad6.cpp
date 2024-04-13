#include <stdio.h>
#include <stdlib.h>
 
 #define TRACE(s,args...) printf(s, ## args)
 
 int main()
 {
 TRACE("%d %d %d %d",2,6, 7,8);
 int x;
 scanf("%d", &x);
 int array[x];
 
 return 0;	
 }
