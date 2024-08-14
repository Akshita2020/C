// Program to check whether entered character is alphabet or not 
#include <stdio.h>//Input output header file

int main()//Main function 
{
    char ch;//Declaring variable
    
    printf("Enter any Character:\n");//printing  
    scanf("%c",&ch);//Taking value from user
         
         //Checking condition  
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')) 
        
        //print if the condition is true 
          {  printf("Entered case is alphabet:%c \n",ch);
    }
    else {
        //print if the condtion is false
        printf("Entered case is not alphabet \n ");
    }

    return 0;
}