
#include <stdio.h>

int main() {
    int check_array = 1;
int arr1[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
int arr2[3][3] = {{1,2,3},{1,2,3},{1,2,3}};

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(arr1[i][j]!=arr2[i][j])
        {
            check_array = 0;
            break;
        }
    }
}
if(check_array == 0)
{
    printf("Not same");
}
else
{
     printf("Same");
}

    return 0;
}
