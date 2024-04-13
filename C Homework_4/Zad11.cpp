#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
	int i;
	
	for(i = strlen(s); i >= 0; i--) {
		putchar(s[i]);
	}
}

int main() {
	char str[60];
	fgets(str, 60, stdin);
	reverse(str);
	
	return 0;
}
