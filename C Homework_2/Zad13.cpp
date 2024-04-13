#include <stdio.h>  
#include <string.h>  
int main()  
{  
    int i = 0;
    char str[] = "Hello";
       for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }

    printf("%s",str);
    return 0;  
}
