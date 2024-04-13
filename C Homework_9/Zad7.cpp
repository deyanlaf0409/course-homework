#include <stdio.h>
#define ROWS 10
#define COLS 3
 
int checkUniqueRows(int matrix[ROWS][COLS]) {
    int uniqueCounter = 0;
    
    for (int i = 0; i < ROWS; i++) // loop for current row
    {
        int flag = 0; // if current row is not unique move to next row
        for (int j = 0; j < ROWS; j++) // loop for previous ROWS
        {
            if (i == j)
            {
                // step over same row
                continue;
            }
            
            int notUnique = 0; // count equal elements
            for (int k = 0; k < COLS; k++) // loop for curent element
            {
                if (matrix[i][k] == matrix[j][k]) // [i][k] = current row repeat elements, [j][k] cycle previous ROWS
                {
                    // if elements are equal
                    notUnique++;
                }
            }
            if (notUnique == COLS)
            {
                // if ROWS are equal
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            // if row is unique
            uniqueCounter++;
        }
        
    }
 
    return uniqueCounter;
}
 
int main() {
    int binMatrix[ROWS][COLS] = {
        {0, 0, 1}, 
        {0, 1, 0}, // unique
        {1, 0, 0}, 
        {0, 0, 1},
        {0, 0, 1},
        {1, 0, 0},
        {1, 1, 1}, 
        {1, 1, 1},
        {0, 0, 1},
        {0, 0, 0}  // unique
    }; // total unique ROWS must be 2
    int uniqueRows = checkUniqueRows(binMatrix);
    printf("%d", uniqueRows);
 
    return 0;
}
