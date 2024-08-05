#include <stdio.h>

int main() {
    float principal, rate, interest;
    int time;

    // Declare variables for principal amount, rate of interest, and time in years
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Print the calculated interest
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}
