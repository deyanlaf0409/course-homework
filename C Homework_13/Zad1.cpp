
#include <stdio.h>

struct Auto {
    char brand[15];
    char model[15];
    int year;
};

void print(struct Auto *Car)
{
    printf("Car Brand: %s\n",Car->brand);
    printf("Car Model: %s\n",Car->model);
    printf("Car Brand: %d\n",Car->year);
}

int main() {
    struct Auto Car;
puts("Enter car brand:");
scanf("%s",Car.brand);
puts("Enter car model:");
scanf("%s",Car.model);
puts("Enter car year:");
scanf("%d",&Car.year);
print(&Car);
    return 0;
}
