// Creating a program in c to find string length, concatenate strings, copy strings and compare strings using string.h library
#include <stdio.h>
#include <string.h>

int main() {
// 1)Program to find string length
    char Name[20] = "Akshita";
    
    // Printing the name
    printf(" your name is : %s\n", Name);

    // Calculate and print the length of the string
    int length = strlen(Name);
    printf("And the length of your name is: %d\n", length);
    
    // 2)Program to concatenate strings
    
    //Declaring strings
    char Your_First_Name[20]= "Akshita";
    char Your_Last_Name[20]= "Tiwari";
    char Your_Full_Name[40];

    // Concatenating Your_Last_Name to Your_First_Name
    strcat(Your_First_Name,Your_Last_Name);
    
   // Printing the full name using printf
   printf("\n Your full Name: %s \n",Your_First_Name);
    
    
    // 3)copy strings and compare strings using string.h library
    
    //Declaring Strings
     char naam1[] = "akshita";
    char naam2[20];  
    // String copy
    strcpy(naam2, naam1);
    printf("Copied Name: %s\n", naam2);

    // String compare
    char word1[] = "Akshita";
    char word2[] = "Tiwari";

    int comparsion = strcmp(word1, word2);

    //using if and else to compare
    if (comparsion == 0) {
        printf("Words are equal\n");
    } else if (comparsion < 0) {
        printf("%s comes before %s\n", word1, word2);
    } else {
        printf("%s comes after %s\n", word1, word2);
    }

    return 0;
}
