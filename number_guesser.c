#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // seed with current time

    int random_number = (rand() % 100) + 1;  // range 1–100
    int number_of_guesses;
    int guessed_number;

    printf("%d", random_number);

    for (number_of_guesses=0; guessed_number != random_number; number_of_guesses++)
    {
        printf("Guess the number:");
        scanf("%d", &guessed_number);

        if(guessed_number>random_number){
            printf("Lower number please!\n");
        }
        else if(guessed_number<random_number){
            printf("Higher number please!\n");
        }
        else {
            printf("CONGRATS!!!\n");
        }
    }
    

    printf("You guessed the number in %d guesses", number_of_guesses);
    

    return 0;
}

