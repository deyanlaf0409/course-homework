#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    FILE *fptr;

    fptr = fopen("test.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        return 1;
    }
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
