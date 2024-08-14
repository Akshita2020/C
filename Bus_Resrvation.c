//Bus resrvation program
#include <stdio.h>
//using struct to store various variables
struct Bus {
    int busNumber;
    char source[50];
    char destination[50];
    int totalSeats;
    float fare;
}b;//declaring refrence
struct Passenger {
    char name[50];
    int age;
    int seatNum;
}p;
//Declaring details function
void details() {
    printf("Welcome to the charted bus facilites!\n");
     printf("Please enter passeger details:\n");
     //Taking inputs from user
    printf("Enter your name: ");
    gets(p.name);
    printf("Enter your age: ");
    scanf("%d", &p.age);
    printf("Enter seat number: ");
    scanf("%d", &p.seatNum);
}
//decalring calculation function
void calculation() {
    //taking inputs from user
    printf("Enter bus no: ");
    scanf("%d", &b.busNumber);
    printf("Enter your source city: \n");
    gets(b.source);
    printf("Enter your destination city: ");
    gets(b.destination);
    printf("Enter the number of seats: ");
    scanf("%d", &b.totalSeats);
//calculation fare
    b.fare = 500.0;
    float total_price = b.fare * b.totalSeats;
    printf("Your final amount is: %.2f\n", total_price);
}

int main() {
    details();
    calculation();
    
        // Print the entered details
    printf("\nPassenger Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Seat Number: %d\n", p.seatNum);

    printf("\nBus Details:\n");
    printf("Bus Number: %d\n", b.busNumber);
    printf("Source City: %s\n", b.source);
    printf("Destination City: %s\n", b.destination);
    printf("Number of Seats: %d\n", b.totalSeats);


    return 0;
}
