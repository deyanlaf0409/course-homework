
#include <stdio.h>
#include <string.h>

int main()
{
    char string[30];
    char *p = string;
    int vowels = 0;
    int consonants = 0;
    
    printf("Enter sting: ");
    scanf("%s",&string);
    int size = strlen(string);
    
    for(p = &string[0];p<=&string[size-1];p++)
    {

        if(*p=='A'||*p=='a' || *p=='E'||*p=='e' || *p=='I'||*p=='i' || *p=='O'||*p=='o' || *p=='U'||*p=='u' || *p=='Y'||*p=='y')
         {
            vowels++;
         }
         else
         {
            consonants++;
         }

    }
    
    printf("Glasni: %d",vowels);
    printf("\nSuglasni: %d",consonants);
    
    return 0;
}
