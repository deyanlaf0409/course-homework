#include <stdio.h>

int main() {
  int N = 3;  
int i,j,check = 1;
int arr[N][N];
//Making the array
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    if(i==j)
    {
        arr[i][j] = 1;
    }
    else
    {
        arr[i][j] = 0;
    }
}
//Printing the array
for(i=0;i<N;i++)
{
     for(j=0;j<N;j++)
     {
        printf("%d",arr[i][j]);
     }
   printf("\n"); 
}
//Checking the array
for(i=0;i<N;i++)
{
     for(j=0;j<N;j++)
     {
        if(arr[i][j] != 1 && arr[j][i] !=0)
        check = 0;
        
     }
}
if(check == 1 )
{
	printf(" The matrix is an identity matrix.\n\n");
}
   else{
	printf(" The matrix is not an identity matrix.\n\n");
   }
  return 0;
}
