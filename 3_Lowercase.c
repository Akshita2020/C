// Program to check whether entered character is in lowercase or not 
#include <stdio.h>//Input output header file

int main()//Main function 
{
    char ch;//Declaring variable
    
    printf("Enter any Character:\n");//printing  
    scanf("%c",&ch);//Taking value from user
    
        if(ch>='a' && ch<='z')//Checking condition  
        //print if the condition is true 
          {  printf("Entered case is in lowercase:%c \n",ch);
    }
    else {
        //print if the condtion is false
        printf("Entered case is not in lowercase \n ");
    }

    return 0;
}