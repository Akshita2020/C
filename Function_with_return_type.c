/* C Program to Calculate Square of a Number */
 
#include <stdio.h>

// Function to calculate the square of a number
int calculateSquare(int number) {
    return number * number;
}

int main() {
    //Declaring variable to store the input number
    int num;

    //  Taking input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating the square by calling the function
    int square = calculateSquare(num);

    // Displayings the result
    printf("Square of %d is: %d\n", num, square);

    return 0;
}
