#include <stdio.h>

int main() {
	double a, b;
	int n;
	scanf("%f %f %d", &a, &b, &n);
	double result = a / b;
	
	printf("%.*f", n, result);
	
	return 0;
}
