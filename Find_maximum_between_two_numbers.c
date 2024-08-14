//C program to find maximum between two numbers
#include <stdio.h>

int main() {
 int num1=20, num2=10;
 printf(" enter the maximum number %d \n",num1,num2);
 scanf("%d%d", &num1, &num2);
 
 if(num1>=num2) {
     printf("enter num1 is greater than num2 %d \n", num1);
 }
 else {
     printf("condition is false %d \n", num2);
 }

    return 0;
}