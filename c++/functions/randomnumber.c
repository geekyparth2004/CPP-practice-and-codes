#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 200) + 1;

    // Print the random number 
    printf("Random number between 1 and 100: %d\n", random_number);

    return 0;
}
