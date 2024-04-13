#include <stdio.h>

int numLength (int num) {
    // take current length of num
    int length = 0;

    for (int i = 0; num; i++)
    {
        num /= 10;
        length++;
    }

    return length;
}

void itoa(int n, char s[]) {
    int nLength = numLength(n);
    *(s+nLength-1) = (n % 10) + '0'; // convert to char and put it in the right place
}

int main() {
    int num = 7018151;
    char str[60] = {};
    do
    {
        itoa(num, &str[0]);
        num /= 10; // remove last digit

    } while (num);

    printf("%s", str);

    return 0;
}
