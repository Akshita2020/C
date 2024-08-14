/*Problem 1: Calculate Area and Perimeter of a Rectangle
  
  You are building a program to calculate the area and perimeter of a rectangle. Write a C program with two functions, one to calculate the area and the other to calculate the perimeter. The user will input the length and width of the rectangle, and your program will use these functions to display the results.*/
#include <stdio.h>
// Function to calculate the area of a rectangle
float areaofrectangle(float length, float width){
    return length*width;
}
// Function to calculate the perimeter of a rectangle
float perimeterofrectangle(float length, float width){
    return (length+width)*2;
}
int main() {
   float length, width;
    //taking  input length and width from the user
    printf("Enter length of the rectangle:\t");
    scanf("%f", &length);
    printf("Enter width of the rectangle:\t");
    scanf("%f", &width);
    
    // Calculating area and perimeter using functions
    float area = areaofrectangle(length, width);
    float perimeter= perimeterofrectangle(length, width);
    
      // Displaying results
    printf("Area of rectangle is:\t%.2f\n", area);
    printf("Perimeter of rectangle is:\t%.2f",perimeter);
    return 0;
}