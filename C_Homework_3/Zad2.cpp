#include <stdio.h>

int main() {
	float firstDay;
	float raisePerDay;
	int n;
	float dayTarget;
	float wholeTarget;
	
	printf("Km ran the first day: \n");
	scanf("%f", &firstDay);
	printf("Raise per day in %%: \n");
	scanf("%f", &raisePerDay);
	printf("For N days: \n");
	scanf("%d", &n);
	printf("Day Target km: \n");
	scanf("%f", &dayTarget);
	printf("Whole Target km: \n");
	scanf("%f", &wholeTarget);
	
	int i;
	
	// a)
	// 10 days
	float kmCounter = firstDay;
	float tenDays = firstDay;
	for(i = 0; i < 10; i++) {
		kmCounter += kmCounter * raisePerDay / 100;
		tenDays += kmCounter;
	}
	
	// b) N days
	kmCounter = firstDay;
	float nDays = firstDay;
	for(i = 0; i < n; i++) {
		kmCounter += kmCounter * raisePerDay / 100;
		nDays += kmCounter;
	}
	
	// v) day km reach
	kmCounter = firstDay;
	int dayCounter = 0;
	while(kmCounter < dayTarget) {
		kmCounter += kmCounter * raisePerDay / 100;
		dayCounter++;
	}
	
	// g) total km reach
	float totalKm = firstDay;
	kmCounter = firstDay;
	int wholeCounter = 0;
	while(totalKm < wholeTarget) {
		kmCounter += kmCounter * raisePerDay / 100;
		totalKm += kmCounter;
		wholeCounter++;
	}
	printf("\nKm in 10 days: %f", tenDays);
	printf("\nKm in N days: %f", nDays);
	printf("\nDay target reached in %d days", dayCounter);
	printf("\nWhole target reached in %d days", wholeCounter);
	
	return 0;
}
