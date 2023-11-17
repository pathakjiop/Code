#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer){

	// If both the user and computer
	// has choose the same thing
	if (you == computer)
		return -1;

	// If user's choice is stone and
	// computer's choice is paper
	if (you == 's' && computer == 'p')
		return 0;

	// If user's choice is paper and
	// computer's choice is stone
	else if (you == 'p' && computer == 's') 
    return 1;

	// If user's choice is stone and
	// computer's choice is scissor
	if (you == 's' && computer == 'z')
		return 1;

	// If user's choice is scissor and	
	// computer's choice is stone
	else if (you == 'z' && computer == 's')
		return 0;

	// If user's choice is paper and
	// computer's choice is scissor
	if (you == 'p' && computer == 'z')
		return 0;

	// If user's choice is scissor and
	// computer's choice is paper
	else if (you == 'z' && computer == 'p')
		return 1;
}

int main(){
    int n;
    char you, computer, result;
    char playAgain;

    int userScore = 0;
    int computerScore = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; ++i) {
        n = rand() % 100;

        if (n < 33)
            computer = 's';
        else if (n > 33 && n < 66)
            computer = 'p';
        else
            computer = 'z';

        printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
        scanf(" %c", &you);  // Use a space before %c to consume the newline character left in the input buffer

        result = game(you, computer);

        if (result == -1) {
            printf("\n\n\t\t\t\tGame Draw!\n");
        } else if (result == 1) {
            printf("\n\n\t\t\t\tWow! You have won the game!\n");
            userScore++;
        } else {
            printf("\n\n\t\t\t\tOh! You have lost the game!\n");
            computerScore++;
        }

        printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", you, computer);
        printf("\t\t\t\tCurrent Score: User %d - %d Computer\n", userScore, computerScore);

        // Ask the user if they want to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        if (playAgain != 'y' && playAgain != 'Y') {
            printf("Thanks for playing! Exiting...\n");
            break;
        }
    }

    printf("\nFinal Score: User %d - %d Computer\n", userScore, computerScore);
	return 0;
}