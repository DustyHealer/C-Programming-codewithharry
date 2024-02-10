#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Results Declared: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("Marks of student %d = %d\n", i + 1, marks[i]);
    }

    //2D Arrays
    int scores[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    printf("\n\nPrinting a Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
