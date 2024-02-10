#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// This code is written for game Rock paper scissors
// This methods generates a random number between 0 and n
int generateRandomNumber(int num);
void makeComputerSelection(char *selection);

int main()
{
    // int start = 0;
    // int end = 5;
    printf("\nLaunching..\nReady..\nLets play Rock Paper Scissors......\n");
    char playerName[50];
    printf("Please enter the player name: ");
    scanf("%s", playerName);

    char playerSelection[10], computerSelection[10];
    int numberOfTurns = 3, i = 0, playerScore = 0, computerScore = 0;
    while (i < numberOfTurns)
    {
        printf("Please enter - Rock Paper or Scissors: ");
        scanf("%s", playerSelection);
        printf("Computer is making a selection...\n");
        makeComputerSelection(computerSelection);
        printf("Computer has selected %s\n", computerSelection);

        if (strcmp(playerSelection, "Rock") == 0 || strcmp(playerSelection, "rock") == 0)
        {
            if (strcmp(computerSelection, "Paper") == 0)
            {
                printf("Computer Wins\n");
                computerScore++;
            }
            else if (strcmp(computerSelection, "Scissors") == 0)
            {
                printf("Player Wins\n");
                playerScore++;
            }
            else
            {
                printf("This is a tie\n");
            }
        }
        else if (strcmp(playerSelection, "Paper") == 0 || strcmp(playerSelection, "paper") == 0)
        {
            if (strcmp(computerSelection, "Scissors") == 0)
            {
                printf("Computer Wins\n");
                computerScore++;
            }
            else if (strcmp(computerSelection, "Rock") == 0)
            {
                printf("Player Wins\n");
                playerScore++;
            }
            else
            {
                printf("This is a tie\n");
            }
        }
        else if (strcmp(playerSelection, "Scissors") == 0 || strcmp(playerSelection, "scissors") == 0)
        {
            if (strcmp(computerSelection, "Rock") == 0)
            {
                printf("Computer Wins\n");
                computerScore++;
            }
            else if (strcmp(computerSelection, "Paper") == 0)
            {
                printf("Player Wins\n");
                playerScore++;
            }
            else
            {
                printf("This is a tie\n");
            }
        }
        else
        {
            printf("Invalid Selection, please try again.....\n");
        }

        printf("Scores:\n%s : %d\tComputer : %d\n", playerName, playerScore, computerScore);
        i++;
    }

    if (playerScore > computerScore)
    {
        printf("%s Wins\n", playerName);
    }
    else if (playerScore < computerScore)
    {
        printf("Computer Wins\n");
    }
    else
    {
        printf("Match Tied\n");
    }

    // printf("Random number between %d and %d is %d", start, end, generateRandomNumber(end));
    return 0;
}

int generateRandomNumber(int num)
{
    srand(time(NULL));
    return rand() % num;
}

void makeComputerSelection(char *selection)
{
    int num = generateRandomNumber(2);
    switch (num)
    {
    case 0:
        strcpy(selection, "Rock");
        break;

    case 1:
        strcpy(selection, "Paper");
        break;

    case 2:
        strcpy(selection, "Scissors");
        break;

    default:
        break;
    }
}