#include <stdio.h>

double atof(char* str) {
    static int floating = 0;
    static double num = 0;
    if(*str == '\0') {
        return num / floating;
    }
    if (*str == '.')
    {
        floating = 1;
    }
    else if(floating >= 1) {
        num = num * 10 + (*str - '0');
        floating *= 10;
    }
    else {
        num = num * 10 + (*str - '0');
    }
    return atof(str+1);
}

int main() {
    double d = atof("34244.3526");
    printf("%lf ", d);

    return 0;
}
