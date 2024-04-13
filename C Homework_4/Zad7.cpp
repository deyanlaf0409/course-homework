#include <stdio.h>

int main() {
	int counter = 0;
	char c;
	char arr[1000];
	
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			if(counter >= 80) {
				int i = 0;
				for(i = 0; i <= counter; i++) {
					putchar(arr[i]);
				}
				putchar('\n');
			}
			counter = 0;
			continue;
		}
		arr[counter++] = c;
	}
	
	return 0;
}
