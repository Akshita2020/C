//Create a program c to reverse the given string in reverse order

#include <stdio.h>
#include <string.h>

int main() {
    // Declaring an array to store 10 characters
    char Name[10];

    // Prompting user to enter a name
    printf("Enter your Name: ");
    scanf("%s", Name);

    // Calculating the length of the entered name
    int length = strlen(Name);

    // Printing the output
    printf("\nYour name has been reversed: ");

    // Using for loop to reverse order and print them
    for (int i = length - 1; i >= 0; --i) {
        printf("%c", Name[i]);
    }

    return 0; 
}
