#include <stdio.h>

int main() {
	char c;
	int letters = 0;
	int nums = 0;
	while((c = getchar()) != '\n') {
		if(c >= '0' && c <= '9') {
			nums++;
			continue;
		}
		if(c >= 'a' && c <= 'z' ||
		c >= 'A' && c <= 'Z') {
			letters++;
		}
	}
	
	printf("\nnums %d, letters %d", nums, letters);
	
	return 0;
}
