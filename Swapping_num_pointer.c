//Swapping numbers through pointer
#include <stdio.h>

int main() {
int x=10, y=20,*p1, *p2,p3;

printf("before swapping Value of x and y are: %d,%d\n", x,y);

p1=&x;
p2=&y;
p3=*p1;
*p1=*p2;
*p2=p3;
printf("After swapping Value of x and y are: %d,%d", x,y);
    return 0;
}