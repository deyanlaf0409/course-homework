
#include <stdio.h>

#define getVariableName(x) #x

int main()
{
    int student_age = 21;

    printf("%s", getVariableName(student_age));

    return 0;
}
