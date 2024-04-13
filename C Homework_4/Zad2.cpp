#include <stdio.h>

int main() {
	int counter = 0;
	char c;
	printf("Press X to exit \n");
	while((c = getchar()) != 'X') {
		if(c == '\n'){
			counter++;
		}
	}
	printf("\n%d", counter);
	
	return 0;
}
