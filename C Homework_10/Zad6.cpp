#include <stdio.h>
int linear_search( int array[],int size,int key);
int main(){
    int array[5] = {2,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    int key  = 3;
    
    printf("%d\n",linear_search(array,size,key));
    return 0;
}
int linear_search(int array[],int size,int key)
{
    for (int *p = &array[size];p>=&array[0];p--)
    {
        if (*p == key)
        {
            return  1;
        }
    }
    return -1;
}
