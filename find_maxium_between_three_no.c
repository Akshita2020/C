//check whether a number is positive, negative or zero

#include <stdio.h>

int main() {
 int num;
 printf("enter a number");
 scanf("%d", &num);
  if(num>=0){
      printf("the number is poistive %d \n",num);
  }
  else if(num<=0) {
      printf("the number is negative %d \n", num);
  }
  else if (num==0) { 
      printf("the number is equal %d \n", num);
} 
    return 0;
}