#include<stdio.h>
#include<stdlib.h>

int main()
{

    typedef struct
    {
        char* emp_name;
        int emp_id;
    } Employees;

    int num=10,i;
    Employees* employeesData = malloc(num * sizeof *employeesData);

    for (i = 0; i < num; i++)
    {
        employeesData[i].emp_name=(char*)malloc(sizeof(char*));
       
        printf("Enter employee name :");
        scanf("%s",employeesData[i].emp_name);

        printf("Enter employee id  :");
        scanf("%d",&employeesData[i].emp_id);

    }
    for (i = 0; i < num; i++)

        printf("Employee Name: %s, Employees Id: %d\n",employeesData[i].emp_name,employeesData[i].emp_id);
free(employeesData);
    return (0);}
