// Create a program in c to calculate the volume of cuboid by taking input from user in actual parameter then pass it to the function in formal parameter and generate the result

#include <stdio.h>

// Declaring Variables to store cuboid dimensions
int cuboid ( float length, float width, float height) {
    return length*width*height; //Formal parameter, Receiving value
}
int main() {
    
  float l,H,W;//Actual parameter,Passing value to formal parameter
  
  //Taking input from user
  printf("Enter length, width and height to find volume of cuboid: \n");
  scanf("%f%f%f", &l,&H,&W);
  
  // Calculating the volume by calling the function
float volume= cuboid(l,H,W); 

 // Displaying the result
 printf("Volume of the cuboid %.2f \n",volume);
 return 0;
}