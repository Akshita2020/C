#include<stdio.h>

int main() 
{
    int per; // taking per as variable to represent percentage.
    
    printf("enter your percentage="); // asking percentage from the user 
    scanf("%d", &per);
    if(per>=80&&per<=100) // giving else if condition to check grades secure by the user.
    { 
        printf("Result:-PASS\n");
        printf("GRDAE:- 'B' \n ");
    }
    else if(per>=50&&per<65) //giving else if condition to check the grades secure by user. 
    {
        printf("RESULT:- PASS\n");
        printf("GRADE:-'C' \n");
    }
    
    else if (per>=33&&per<50) //giving else if condition to check grades secure by user. 
    {
        printf("RESULT:- PASS \n");
        printf("GRADE:-'D \n");
    }
    else if (per>=0 && per<33) // giving else if condition to checck the grades secure by user. 
    {
        printf("RESULT:-FAIL \n");
        printf("GRADE:-'E' \n");
    }
    else //using else if the wrong  input given by the user.
    {
        printf("please enter the correct percentage \n");
    }
        
    
return 0;
}