#include <stdio.h>


void Convert(int x) {
    int a[10],i;
for(i=0;x>0;i++)    
{    
a[i]=x%2;    
x=x/2;    
}    
printf("\nBinary of Given Number is= ");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}
}

int main() {
int n;
printf("Enter number");
scanf("%d",&n);
Convert(n);
}
