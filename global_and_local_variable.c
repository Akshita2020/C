\\global and local variable
#include <stdio.h>
float discount( float price, float discount)
{ 
    float amount = (price-price*discount/100);
return amount;
}
int main()
{
    printf(" final price is %f", discount (500,10));

    return 0;
}
