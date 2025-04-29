#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);  // Read the number from user input

    // Check if the number is positive
    if (number > 0) {
        printf("The number is positive.\n");
    }
    // Check if the number is negative
    else if (number < 0) {
        printf("The number is negative.\n");
    }
    // If it's not positive or negative, it must be zero
    else {
        printf("The number is zero.\n");
    }

    return 0;  // Program finished successfully
}
