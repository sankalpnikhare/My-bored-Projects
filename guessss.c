#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed for random number generation
    int random_Number = (rand() % 100) + 1;

    char name1[10], name2[10];
    int no_of_g1 = 0, no_of_g2 = 0;
    int guess_no;

    // Player 1
    printf("Enter Player 1 name: ");
    scanf("%s", name1);

    printf("Hello %s! Start guessing the number (1-100):\n", name1);
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess_no);

        no_of_g1++;  // Increment guess count for Player 1

        if (guess_no > random_Number) {
            printf("Lower the value.\n");
        } else if (guess_no < random_Number) {
            printf("Higher the value.\n");
        } else {
            printf("Congratulations %s! You've guessed the correct number in %d attempts.\n", name1, no_of_g1);
        }
    } while (guess_no != random_Number);

    // Player 2
    printf("\nEnter Player 2 name: ");
    scanf("%s", name2);

    printf("Hello %s! Start guessing the number (1-100):\n", name2);

    srand(time(0));  // Seed for random number generation
    int random_Number2 = (rand() % 100) + 1;
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess_no);

        no_of_g2++;  // Increment guess count for Player 2

        if (guess_no > random_Number2) {
            printf("Lower the value.\n");
        } else if (guess_no < random_Number2) {
            printf("Higher the value.\n");
        } else {
            printf("Congratulations %s! You've guessed the correct number in %d attempts.\n", name2, no_of_g2);
        }
    } while (guess_no != random_Number2);

    // Determine the winner
    printf("\nFinal Results:\n");
    if (no_of_g1 < no_of_g2) {
        printf("%s wins with fewer guesses (%d vs %d)!\n", name1, no_of_g1, no_of_g2);
    } else if (no_of_g1 > no_of_g2) {
        printf("%s wins with fewer guesses (%d vs %d)!\n", name2, no_of_g2, no_of_g1);
    } else {
        printf("It's a tie! Both players took %d guesses.\n", no_of_g1);
    }

    return 0;
}
