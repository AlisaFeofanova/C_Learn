#include <stdio.h>

int main() {
    int i;

    // FOR LOOP
    // Repeat from i = 1 to i = 5
    printf("Using for loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("Count: %d\n", i);
    }

    // WHILE LOOP
    // Reset i to 1
    printf("\nUsing while loop:\n");
    i = 1;
    while (i <= 5) {
        printf("Count: %d\n", i);
        i++;  // Increment i
    }

    // DO...WHILE LOOP
    // Reset i to 1
    printf("\nUsing do...while loop:\n");
    i = 1;
    do {
        printf("Count: %d\n", i);
        i++;  // Increment i
    } while (i <= 5);  // Continue while condition is true

    return 0;  // End of program
}
