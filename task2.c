#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Declare three integer variables for storing three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Print the result
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}
