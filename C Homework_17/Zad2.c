#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
 
    argv = argv + argc-1;
    int i;
    for(i = argc-1 ;i>0;argv--,i--)
    {   if(*argv == argv[argc])
            {break;}
        printf("%s ",*argv);
    }
    printf("\n");
 
 
    return 0;
}
