#include <stdio.h>

struct Distance {
   int kilometers;
   int meters;
   int centimeters;
} d1, d2, result;

int main() {
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter km: ");
   scanf("%d", &d1.kilometers);
   printf("Enter meters: ");
   scanf("%d", &d1.meters);
     printf("Enter centimeters: ");
   scanf("%d", &d1.centimeters);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
      printf("Enter km: ");
   scanf("%d", &d2.kilometers);
   printf("Enter meters: ");
   scanf("%d", &d2.meters);
     printf("Enter centimeters: ");
   scanf("%d", &d2.centimeters);

   
   // adding distances
   result.kilometers = d1.kilometers + d2.kilometers;
   result.meters = d1.meters + d2.meters;
   result.centimeters = d1.centimeters + d2.centimeters;
if(result.centimeters>100)
{
	result.meters += result.centimeters/100;
}
if(result.meters>1000)
{
	result.kilometers += result.meters/1000;
}

   printf("\nSum of distances = %dkm %dm %dcm", result.kilometers,result.meters,result.centimeters);
   return 0;
}
