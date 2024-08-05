#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    // Declare a variable for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print the temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
