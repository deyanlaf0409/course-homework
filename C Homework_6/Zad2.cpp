
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
int i,n;
int check_number = 0;
int arr[20] = {};
srand(time(0));

for(i=0;i<20;i++)
{
	printf("%d\t", (rand() %20)+1);
    arr[i] = (rand() %20)+1;
}

printf("Vuvedi n");
scanf("%d",&n);

for(i=0;i<20;i++)
{
   if(arr[i]==n)
   {
       check_number = 1;
       break;
   }
}
if(check_number == 0)
{
    printf("n ne e namereno");
}
else
{
    printf("n e namereno");
}
}
