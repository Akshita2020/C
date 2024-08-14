//Swapping numbers
#include <stdio.h>

int main() {
int x=10;
int y=5;
int z;
printf("before swapping Value of x and y are: %d,%d\n", x,y);

z=x;
x=y;
y=z;
printf("After swapping Value of x and y are: %d,%d", x,y);
    return 0;
}