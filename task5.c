#include <stdio.h>

int main() {
    char name[50], course[50], university[50], program[50], location[50];
    int num1, num2, temp;

    // Get user details
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your course: ");
    scanf("%s", course);
    printf("Enter your university: ");
    scanf("%s", university);
    printf("Enter your program: ");
    scanf("%s", program);
    printf("Enter your location: ");
    scanf("%s", location);

    // Display user details
    printf("\nUser Details:\n");
    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("University: %s\n", university);
    printf("Program: %s\n", program);
    printf("Location: %s\n", location);

    // Get two numbers and swap them
    printf("\nEnter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);

    // Swap the values
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Print the swapped values
    printf("After swapping: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
