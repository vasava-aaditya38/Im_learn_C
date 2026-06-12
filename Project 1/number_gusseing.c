#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number;
    int no_of_guessing = 0;
    int guese;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 50
    random_number = (rand() % 50) + 1;

    printf("Random number: %d\n", random_number);

    do
    {
        printf("Gusse the number between 1 to 50: ");
        scanf("%d", &guese);
        no_of_guessing ++;

        if (guese > random_number)
        {
            printf("Too high\n");
        }

        else if (guese < random_number)
        {
            printf("Too low\n");
        }

        else
        {
            printf("You gusse right number\n");
        }

    } while (guese != random_number);

    printf("You guese the number is %d attempts", no_of_guessing);

    return 0;
}