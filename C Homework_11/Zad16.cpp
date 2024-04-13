#include <stdio.h>
 
int compare_string(char*, char*);
 
int main()
{
    char str1[100],str2[100], result;
 
    printf("Enter first string\n");
    scanf("%s",&str1);
    printf("Enter second string\n");
     scanf("%s",&str2);
 
    result = compare_string(str1,str2);
 
    if ( result == 0 )
       printf("Both strings are same.\n");
    else
       printf("Entered strings are not equal.\n");
    return 0;
}
 
int compare_string(char *str1, char *str2)
{
   while(*str1==*str2)
   {
      if ( *str1 == '\0' || *str2 == '\0' )
         break;
 
      str1++;
      str2++;
   }
   if( *str1 == '\0' && *str2 == '\0' )
      return 0;
   else
      return -1;
}
