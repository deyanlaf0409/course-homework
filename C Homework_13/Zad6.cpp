    #include <stdio.h>
#include <stdlib.h>

#define size 2
struct student {
    char firstName[50];
    int roll;
    float marks;
    int total;
} s[size];

int main() {
    int i;
    float grade, average;   /* Work variables to input grades and derive total average */
    printf("Enter information of students:\n");

    average = 0.0;

    // storing information
    for (i = 0; i <size; ++i) {
        s[i].roll = i + 1;
        printf("\nStudent %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        s[i].marks = 0.0;
        s[i].total = 0;

        while(1)
        {
            printf("Enter marks or 0.0 to conclude grades for this student: ");
            scanf("%f", &grade);
            if (grade == 0.0)
            {
                break;
            }
            s[i].marks += grade;
            s[i].total++;
        }
        average = average + (s[i].marks / s[i].total);
    }

    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < size; ++i) {
        printf("\nStudent %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Average marks: %.1f", s[i].marks / s[i].total);
        printf("\n");
    }

    printf("Average grade for all students: %f\n", average / size);

    return 0;
}
