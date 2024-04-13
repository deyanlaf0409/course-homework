
#include <stdio.h>

struct Point{
    int x;
    int y;
};

struct Rect{
    struct Point p1;
    struct Point p2;
};

void MakePoint(struct Point* p,int x,int y)
{
    p->x = x;
    p->y = y;
}

int main() 
{
struct Rect screen;
MakePoint(&screen.p1, 0,0);
MakePoint(&screen.p2, 15,15);

for(int i = screen.p1.x; i<screen.p2.x; i++ )
{
    for(int j = screen.p1.y; j<screen.p2.y; j++)
    {
        printf("-");
    }
    printf("\n");
}
    return 0;
}
