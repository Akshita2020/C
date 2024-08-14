// Creating calculator using functions
#include <stdio.h>

int main() {
//Declaring variables
char op;
double first, second; 
//Taking user required input from user
printf(" please enter the operands--> *, /, +, -\n");
scanf("%c", &op);
//Taking two numbers from user
printf(" please enter any two nummbers-->\n");
scanf("%lf %lf", &first, &second);
//using switch to perform operations
switch (op) {
    
case '+' : printf(" %.2lf+ %.2lf =%.2lf", first, second, first+second);
break;

case '-' : printf(" %.2lf- %.2lf =%.2lf", first, second, first-second);
break;

case '*' : printf(" %.2lf* %.2lf =%.2lf", first, second, first*second);
break;

case '/' : printf(" %.2lf/%.2lf =%.2lf", first, second, first/second);
break;

default: 
printf(" Error ! operator is incorrect");
}

    return 0;
}