// Program to find factorial

#include <stdio.h>
int find_factorial(int n);
int main() {
   int n;
   //Ask user for the input and store it in n
    printf("\n enter any positive intger:");
    scanf("%d", &n);
    
    //Calling defined function
    int fact = find_factorial(n);
    //Displaying factorial of input number
    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}
int find_factorial(int n) {
    //Factorial of 0 is 1 
if(n==0) {
    return 1;
}
else {
    //Function calling itself: recursion
    return n*find_factorial(n-1);
    
} 
}