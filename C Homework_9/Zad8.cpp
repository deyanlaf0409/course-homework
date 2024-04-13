#include<stdio.h>

#define R 6
#define C 5

int min(int a, int b, int c)
{
int n = a;
if (n > b)
	n = b;
if (n > c)
	n = c;
return n;
}

void Find_inside_matrix(int arr[R][C])
{
int i,j;
int A[R][C];
int max_of_a, max_i, max_j;

for(i = 0; i < R; i++)
	A[i][0] = arr[i][0];

for(j = 0; j < C; j++)
	A[0][j] = arr[0][j];
	
for(i = 1; i < R; i++)
{
	for(j = 1; j < C; j++)
	{
	if(arr[i][j] == 1)
		A[i][j] = min(A[i][j-1], A[i-1][j],
						A[i-1][j-1]) + 1;
	else
		A[i][j] = 0;
	}
}

max_of_a = A[0][0];
max_i = 0; 
max_j = 0;

for(i = 0; i < R; i++)
{
	for(j = 0; j < C; j++)
	{
	if(max_of_a < A[i][j])
	{
		max_of_a = A[i][j];
		max_i = i;
		max_j = j;
	}	
	}				
}	

printf("Sub matrix: \n");
for(i = max_i; i > max_i - max_of_a; i--)
{
	for(j = max_j; j > max_j - max_of_a; j--)
	{
	printf("%d ", arr[i][j]);
	}
	printf("\n");
}
}	

int main()
{
int arr[R][C] =         {{0, 1, 0, 1, 1},
				         {1, 1, 1, 1, 0},
				         {1, 1, 1, 1, 0},
			           	 {1, 1, 1, 1, 0},
				         {1, 1, 1, 1, 1},
				         {0, 1, 0, 1, 0}};
				
				
Find_inside_matrix(arr);
getchar();
}
