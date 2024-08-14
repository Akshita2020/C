// There are three types of loops For loop,while loop,Do while loop.
// We use For loop when we know the iterations for example:-
#include <stdio.h>
int main()
{// in this we have to print numbers from 1 to 10 so we use for loop for that because we know the iterations.
    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d", i);
        if(i==3){
            break; // its exit from the loop when i = 3;
        } 
    }
    return 0;
}
#include <stdio.h>
int main()
{// in this we have to print numbers from 1 to 10 so we use for loop for that because we know the iterations.
    for (int i = 1; i <= 10; i++)
    {
        
        if(i==3){
            continue; // its skips the value 3 from the loop;
        } 
        printf("\n %d", i);
    }
    return 0;
}
// We use While loop when we dosent know the iterations for example:-
#include <stdio.h>
// in this code i want to print numbers according to the user so i dont know which number the user types that means we dont know the iterations that why we use while loop
int main()
{
    int Num_1, i = 1;
    printf("Enter Your number: "); // taking numbers from the users
    scanf("%d", &Num_1);
    while (i <= Num_1)
    {                       // giving conditon in while loop
        printf("\n %d", i); // printing the value of the i
        i++;
    }
    return 0;
}
// We use Do while loop when we want to excuate one loop atleast before entering the loop always for example:-
// in this i want to check id pass again and again if the id pass is wrong so i am using do while loop
#include <stdio.h>
void main()
{
    int id, pw;
    do
    {
        printf("Please Enter your id: ");
        scanf("%d", &id);
        printf("\n Please Enter your password: ");
        scanf("%d", &pw);
    } while (id != 1234 && pw != 0000);//checking condtion to be matched
}









