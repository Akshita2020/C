#include <stdio.h>

int main() {
    // Declaring arrays to store student roll numbers and marks
    long int stdroll_no[20];
    float stdMarks[20];

    // Using a for loop to get student information
    for (int i = 0; i < 20; i++) {
        // Prompting user for student's roll number
        printf("\nEnter student's Roll no [%li]:",i+1);
        scanf("%li", &stdroll_no[i]);

        // Prompting user for student's marks
        printf("\nEnter student's Marks:",i+1);
        scanf("%f", &stdMarks[i]);
    }

    // Printing roll number and marks for each student
    for (int i = 0; i < 20; i++) {
        printf("\n Roll no: %li, \n Marks: %f", stdroll_no[i], stdMarks[i]);
    }

    return 0;
}
