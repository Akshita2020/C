// purpose of function:-Functions are used to perform certain actions,and they are important for reusing code.
// purpose of prototypes:-prototype is a statement that tells the compiler about the function name,its return type,numbers and data types of its parameter.
// arguments:-Arguments are the values which are passed within the paranthesis of a function when the function is called.
// return values:-A return statement ends the execuation of a function,and returns control to the calling function.
#include <stdio.h>
int num_1;
int fact(int num){
    if(num>1)
    return  num*fact(num-1);
    else
    return 1;
}
//to call fact function in main function we used recursion for that ,we are taking fact function and calling it in printf function.
void main()
{   printf("Enter your number to get its factorial: ");
    scanf("%d",&num_1);
   printf("The factorial of %d is %d",num_1,fact(num_1));//taking the value from the user and passing it in the fact function
}
