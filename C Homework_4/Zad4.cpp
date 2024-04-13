#include <stdio.h>

int main() {
	char c;
	char lastC;
	while((c = getchar()) != 'X') {
		if(c == ' ' && lastC == ' ') {
			continue;
		}
		putchar(c);
		lastC = c;
	}
	
	return 0;
}
