#include <stdio.h>  
#include <string.h>  
int main()  
{  
    int i =0;
    char str[] = "Hello";
        while(str[i]!='\0')
    {
        if(str[i]=='l')
        {
            str[i]='x';
        }
        i++;
    }
    printf("%s",str);
    return 0;  
}
