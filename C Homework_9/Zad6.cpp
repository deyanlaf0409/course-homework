#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define R 3
#define C 3   //Size of the array

int main(void) {

    int i,j,num,check_num=0;
    int arr[R][C];

srand(time(NULL));


//Filling the array with random numbers
for(i=0;i<R;i++)
{
    for(j=0;j<C;j++)
    {
        arr[i][j] = (rand()%100);
    }
}
//Printing the array
for(i=0;i<R;i++)
{
    for(j=0;j<C;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("Add number: ");
scanf("%d",&num);
//Searching for number
for(i=0;i<R;i++)
{
    for(j=0;j<C;j++)
    {
        if(arr[i][j]==num)
        {
            check_num = 1;

            break;
        }
 if(check_num==1)
 {
     break;
 }
    }
 if(check_num==1)
 {
     break;
 }
}
if(check_num==1)
{
printf("Number found!! Position:[%d][%d]",i,j); 
}
else
{
    printf("Number not found!");
}
   return 0;
}
