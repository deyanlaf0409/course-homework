#include <stdio.h>
 #define size 5
struct Point createPoint(int x, int y);
void printPoints(struct Point *p);
 
struct Point
{
    int x;
    int y;
    struct Point *next;
};
 

 
int main()
{
    struct Point points[size];
 
    for(int i = 0; i < size; i++){
        points[i] = createPoint(i * 1, i * 1);
    }
 
    for(int i = 0; i < size - 1; i++){
        points[i].next = &points[i + 1];
    }
 
    printPoints(points);
 
    return 0;
}
 
struct Point createPoint(int x, int y)
{
    struct Point point;
 
    struct Point *ptr = NULL;
    ptr = &point;
 
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
 
    return point;   
}
 
void printPoints(struct Point *p)
{
    printf("(%d, %d)\t", p->x, p->y);
 
    if(p->next)
    {
        printPoints(p->next);
    }
}
