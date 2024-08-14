// Create a c program to find the area of rectangle by passing length and breadth in function's parameter also return value from it.
#include <stdio.h>

// Function to calculate the area of a rectangle and receving the parameter
float Area_of_rectangle(float length, float breadth)
{
return length*breadth;
}
int main() {
    // Variables to store rectangle dimension
    float l=6,b=7;
  
    
// Calculating the area by calling the function and passing the parameter
float area=Area_of_rectangle(l,b);

 // Displaying the result
printf("\n Area of rectangle is:%.2f", area);

    return 0;
}