// Program to check whether entered character is in uppercase or not 

#include <stdio.h>//Input output header file

int main()//Main function 
{
    char ch;//Declaring variable
    
    printf("Enter any Character:\n");//printing  
    scanf("%c",&ch);//Taking value from user
    
        if(ch>='A' && ch<='Z')//Checking condition  
        //print if the condition is true 
          {  printf("Entered case is uppercase:%c \n",ch);
    }
    else {
        //print if the condtion is false
        printf("Entered case is not in uppercase \n ");
    }

    return 0;
}