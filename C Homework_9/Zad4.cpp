
#include <stdio.h>

int main() {
    int x,y,i,j,k;
//Opredelqne na goleminata na masiva
printf("Add rows: ");
scanf("%d",&x);
printf("Add cols: ");
scanf("%d",&y);
int arr[x][y];
//Zapulvane na elementite na masiva
for( i=0;i<x;i++)
{
    for( j=0;j<y;j++)
    {
        printf("Add [%d][%d]:",i,j);
        scanf("%d", &arr[i][j]);
    }
}
//Printirane na masiva
printf("\nYour array:\n");
for( i=0;i<x;i++)
{
    for(int j=0;j<y;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
//Sumirane na koloni
int sum_cols = 0;
for( j=0;j<y;j++)
{
    for( k=0;k<x;k++)
    {
        sum_cols+=arr[k][j];
    }
}
 printf("\nSumata na kolonite:%d",sum_cols);
 //Sumirane na redove
 int sum_rows = 0;
 for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        sum_rows+=arr[i][j];
    }
}
 printf("\nSumata na redovete:%d",sum_rows);
int total_sum = 0;
total_sum = sum_rows + sum_cols;
printf("\nObshto: %d",total_sum);
    return 0;
}
