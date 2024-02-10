#include <stdio.h>

void PrintStarPattern(int rows);
void PrintReverseStarPattern(int rows);

int main()
{
    // Print triangular star pattern
    //  *
    //  **
    //  ***
    //  ****

    // Reverse traingular star pattern
    //  ****
    //  ***
    //  **
    //  *

    // Takes input from user - 0 for star pattern, 1 for reverse star pattern
    char input;
    int rows;
    while (1)
    {
        printf("\nPlease select -\n\t0 for star pattern\n\t1 for reverse star pattern\n\te for exit...\n\nENTER HERE: ");
        scanf(" %c", &input); //Use space before %c to ignore empty spaces
        printf("\nSee Result below: \n");
        switch (input)
        {
        case '0':
            printf("How many rows do you want? ");
            scanf("%d", &rows);
            PrintStarPattern(rows);
            break;

        case '1':
            printf("How many rows do you want? ");
            scanf("%d", &rows);
            PrintReverseStarPattern(rows);
            break;

        case 'e':
            goto end;
            break;

        default:
            printf("Invalid Input. Please try again...\n");
            break;
        }
    }

end:
    printf("Program exited successfully...\n");
    return 0;
}

void PrintStarPattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void PrintReverseStarPattern(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
