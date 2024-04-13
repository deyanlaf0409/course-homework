#include <stdio.h>
int main() {
  int r,c,i,j;
int  arr1[4][4];
int arr2[4][4];
int sum[4][4];
  printf("\nEnter elements for arr1:\n");
  for (i = 0; i < 4; ++i)
    for (j = 0; j < 4; ++j) {
      printf("Enter element arr1[%d][%d]: ", i , j );
      scanf("%d", &arr1[i][j]);
    }

  printf("Enter elements for arr2:\n");
  for (i = 0; i < 4; ++i)
    for (j = 0; j < 4; ++j) {
      printf("Enter element arr2[%d][%d]: ", i , j 
	  
	  );
      scanf("%d", &arr2[i][j]);
    }

  for (i = 0; i < 4; ++i)
    for (j = 0; j < 4; ++j) {
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }

  printf("\nSum: \n");
  for (i = 0; i < 4; ++i)
    for (j = 0; j < 4; ++j) {
      printf("%d   ", sum[i][j]);
  
    }
  return 0;
}
