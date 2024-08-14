// making a programe based on hotel booking 
#include <stdio.h>
int Booking_ID,No_of_rooms,No_of_days;
double amount; 
char Guest_Name[]= "Akshita";

int Booking();
int Details(); 
int Billing();

int Booking(){
    printf("Welcome to the taj hotel \n");
    printf("Please fill the details of booking \n");
    printf("Our terrif plan starts at rupees 9999/- \n");
    
    Details();
}
int Details(){
    printf("Numbers of room required \n");
    scanf("%d", &No_of_rooms);
    
    printf("Numbers of days? \n");
    scanf("%d", &No_of_days);
    
    Billing();
}
int Billing() {
   amount= 9999*No_of_days*No_of_rooms;
    printf("Here is your booking details \n");
    printf("Guest Name %s \n",Guest_Name);
    
    printf("No_of_rooms booked %d \t",No_of_rooms);
    printf("No_of_days to stay %d \t", No_of_days);
    
    printf("Total billing %lf \t ",amount);
    
}
int main() {
    Booking();
    
    
    return 0;
}