#include <stdio.h>

int main() {
	unsigned n;
	scanf("%d", &n);
	int i, j;
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < i; j++) {
			if((i * 2 + j * 2) == n)
				printf("%d*2 + %d*2 = %d\n", i, j, n);
		}
	}
	
	return 0;
}
