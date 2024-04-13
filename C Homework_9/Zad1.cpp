#include <stdio.h>

int main() {
int arr[5][5];
//Making the array with scanf
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        printf("Add [%d][%d] element: ",i,j);
        scanf("%d", &arr[i][j]);
    }
}
//Printing the array 
printf("Array is: \n");
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        printf("%d",arr[i][j]);
        
    }
     printf("\n");
}


    return 0;
}
