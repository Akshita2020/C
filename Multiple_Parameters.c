// Program with multiple parameters

#include <stdio.h>

void StudentDetails(char Name[],int Age,long int ID )//Formal parameters, Receving values from actual parameter 
{
printf("Name: %s \n ",Name);
printf("Age: %d \n ",Age);
printf("ID: %li \n ",ID);
}

int main() 
{
char StudentName[]= "Akshita";//Variables
int StudentAge=22;
long int StudentID=6755535465;// Actual parameter, Passing value to formal parameter

StudentDetails(StudentName,StudentAge,StudentID ); // Function calling 

    return 0;
}