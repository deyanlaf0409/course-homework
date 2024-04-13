#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
	int i;
	for(i = strlen(s); i >= 0; i--) {
		putchar(s[i]);
	}
	putchar('\n');
}

int main() {
	char str[60];
	while(fgets(str, 60, stdin) != NULL) {
    	reverse(str);
	}
	
	return 0;
}
