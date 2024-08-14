// check if both numbers are equals or not, if not then find out the greatest number
#include <stdio.h>

int main() {
    int num1,num2; //Declaring variables
    printf("Enter two digits:-");// Prompting the user to enter two digits
    scanf("%d%d", &num1,&num2);//Taking input from user

// Checking if the two numbers are equal
    if(num1==num2) {
        printf("both numbers are equal: %d\n",num1,num2);
    }
    //Checking if num1 is less than num2
    else if(num1<num2) {
        // Printing the greatest number (num2)
        printf("The greatest number is:%d \n",num2);
    }
    else {
        // Print the greatest number (num1)
        printf("The greatest number is: %d\n",num1);
    }

    return 0;
}