// Formal and Actual parameters

#include <stdio.h>

void sum(int a, int b)//Formal parameters, Receving values from actual parameter 
{
int add= a+b;
printf("sum: %d \n",add);
}

int main() {
  int x=2,y=5,add;// Actual parameter, Passing value to formal parameter

sum(x,y); // Function calling 
    return 0;
}