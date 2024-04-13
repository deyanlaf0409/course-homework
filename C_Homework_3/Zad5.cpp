#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i;
	int sum = 0;
	
	// a)
	for(i = 1; i < 42; i++) {
		int temp = i / 2;
		if(temp % 2 != 0 && temp * 2 == i) {
			sum += i;
		}
	}
	printf("\nThe sum for 41 numbers is: %d\n", sum);
	printf("-----------\n");
	sum = 0;
	// b)
	for(i = 1; i <= n; i++) {
		int temp = i / 2;
		if(temp % 2 != 0 && temp * 2 == i) {
			sum += i;
		}
	}
	printf("\nThe sum for N numbers is: %d\n", sum);
	printf("-----------\n");
	sum = 0;
	
	// v)
	for(i = 50; i >= 0; i--) {
		int temp = i / 2;
		if(temp % 2 != 0 && temp * 2 == i) {
			sum += i;
		}
	}
	printf("\nThe last number is 0: %d\n", sum);
	printf("-----------\n");
	sum = 0;
	
	// g)
	for(i = 1; sum < 1000; i++) {
		int temp = i / 2;
		if(temp % 2 != 0 && temp * 2 == i) {
			sum += i;
		}
	}
	printf("\nSum higher than 999: %d\n", sum);
	
	return 0;
}
