#include <stdio.h>

int main() {
	int counter = 0;
	char c;
	while((c = getchar()) != 'X') {
		if(c == '\n' || c == '\t' || c == ' '){
			counter++;
		}
	}
	printf("\n%d", counter);
	
	return 0;
}
