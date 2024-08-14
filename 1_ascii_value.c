// Program to print characters of all the ASCII values from 91 to 96

#include <stdio.h>

int main() {

    //using for loop to enter from 91 and to exit at 96

   for(int ascii=91;ascii<=96; ascii++) {

       //using if and else to check if condition is more than 91 and less than 96

       if(91<=ascii && ascii<=96) {
           char character= (char)ascii;
           printf("Ascii Value:%d Character:%c \n",ascii,character);
       }
       //To check if condtion is false
       else {
           printf("Inavlid Ascii Value: %d\n",ascii );
       }
   }
    return 0;
}
