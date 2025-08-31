#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // seed with current time

    int random_number = (rand() % 100) + 1;  // range 1–100
    int number_of_guesses=0;
    int guessed_number;

    do
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
        number_of_guesses++;
    } while (guessed_number!=random_number);

    printf("You guessed the number in %d guesses", number_of_guesses);
    

    return 0;
}
