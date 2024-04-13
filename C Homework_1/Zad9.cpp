#include <stdio.h>

int main() {
    double a = 4.9876543;
    double b = 7.123456789012345678890; //Ne vsichki kompilatori gi otpechatvat
   long int c = 18398458438; 
    double d = 583853.28;
    unsigned long long int e = 18398458438583;
    double f = 853.39875937284928422; //Ne vsichki compilatori gi otpechatvat
    
    printf("%.7lf\n",a);
    printf("%lf\n",b);
    printf("%ld\n",c);
    printf("%.2lf\n",d);
    printf("%llu\n",e);
    printf("%lf\n",f);

    return 0;
}
