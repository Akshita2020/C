// Program to check whether entered character is in uppercase or not 

#include <stdio.h>//Input output header file

int main()//Main function 
{
    char ch, upper;//Declaring variable
    
    printf("Enter any Character:\n");//printing  
    scanf("%c",&ch);//Taking value from user
    
        if(ch>='a' && ch<='z')//Checking condition  
        //print if the condition is true 
        
          { upper=ch-32;//converting character to upper
              printf("Entered case is uppercase:%c \n",upper);
    } 
    else {
        //print if the condtion is false
        printf("Entered case is not in uppercase \n ");
    }

    return 0;
}