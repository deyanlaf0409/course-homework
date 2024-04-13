#include <stdio.h>

int main() {
	char c;
	while((c = getchar()) != EOF) {
		if(c >= 'a' && c <= 'z' ||
		c >= 'A' && c <= 'Z') {
			putchar(c);
		}
	}
	
	return 0;
}
