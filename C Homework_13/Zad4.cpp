#include<stdio.h>  

struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
int main ()  
{  
    struct employee emp;  
    printf("Enter Name\n");  
    scanf("%s",emp.name);
    printf("Enter City\n");  
    scanf("%s",emp.add.city);
    printf("Enter Pin\n");  
    scanf("%d",&emp.add.pin);
    printf("Enter Phone number\n");  
    scanf("%s",emp.add.phone);
	  
    printf("Name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
} 
