#include <stdio.h>

int main() {
    float radius;
    float area;
    const float PI = 3.14159;

    // Declare a variable for the radius of a circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Print the area
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
