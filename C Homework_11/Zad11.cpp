#include <stdio.h>

void SortArray(int Size, int* parr)
{
	int i, j, temp;	

	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(*(parr + j) < *(parr + i))
			{
				temp = *(parr + i);
				*(parr + i) = *(parr + j);
				*(parr + j) = temp;
			}			
		}
	}
	printf("\nSorted :");
	for(i = 0; i < Size; i++)
	{
		printf("%d  ", *(parr + i));
	}	
}

int main()
{
	int Size;

	printf("\nEnter Array Size: ");
	scanf("%d", &Size);

	int arr[Size];

	printf("\nEnter %d elements: ", Size);
	for (int i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }  	
	SortArray(Size, arr);   
	printf("\n");	
}

