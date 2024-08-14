
//Creating a program in C to take students name in string , roll number in integer , marks in float and display the output

#include <stdio.h>

int main() {
    // Declaring variables to store student's information
    char students_Name[20];  // Array to store the student's name
    int Students_Roll_no;    // Variable to store the student's roll number
    float Students_Marks;    // Variable to store the student's marks

    // Input section: Get information from the user
    printf("\nEnter student's Name: ");
    scanf("%s", students_Name);  // Taking student's name from the user

    printf("\nEnter student's Roll no: ");
    scanf("%d", &Students_Roll_no);  // Taking student's roll number from the user

    printf("\nEnter student's Marks: ");
    scanf("%f", &Students_Marks);  // Taking student's marks from the user

    // Output section: Displaing the information which is entered by the user
    printf("\nStudent's information\n");
    printf("\nName: %s", students_Name);        // Displaying the student's name
    printf("\nRoll_no: %d", Students_Roll_no);  // Displaying the student's roll number
    printf("\nMarks: %f", Students_Marks);      // Displaying the student's marks

    return 0;
}
