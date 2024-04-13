#include <stdio.h>


typedef struct BitField{
    int widthValidated : 4;
    int heightValidated : 4;
}BitField;


typedef union data{
    int x;
    char y;
}data;


struct Data{
    int a;
    int b;
    BitField status;
    data union1;
};

int main() {
    struct Data MyData;
printf("Memory size occupied by status: %d\n",sizeof(MyData.status));

MyData.a = 1;
printf("a=%d\n",MyData.a);

MyData.b = 2;
printf("b=%d\n",MyData.b);

MyData.union1.x = 3;
printf("x=%d\n",MyData.union1.x);

MyData.union1.y = 'y';
printf("y=%c\n",MyData.union1.y);

printf("Size of struct = %d",sizeof(MyData));
    return 0;
}
