#include <stdio.h>

int main()
{
    printf("------------------------MATRIX MULTIPLICATION-----------------------------\n");
    int m1 = 0, n1 = 0, m2 = 0, n2 = 0;
    printf("Lets input the first matrix...\n");
    printf("Please enter the number of rows in the first matrix: ");
    scanf("%d", &m1);
    printf("Please enter the number of columns in the first matrix: ");
    scanf("%d", &n1);
    // Create first matrix and take inputs
    int matrix1[m1][n1];
    for (int row = 0; row < m1; row++)
    {
        for (int column = 0; column < n1; column++)
        {
            printf("Please enter the element at %d,%d: ", row, column);
            scanf("%d", &matrix1[row][column]);
        }
    }

    printf("Please enter the number of rows in the second matrix: ");
    scanf("%d", &m2);
    printf("Please enter the number of columns in the second matrix: ");
    scanf("%d", &n2);
    // Create second matrix and take inputs
    int matrix2[m2][n2];
    for (int row = 0; row < m2; row++)
    {
        for (int column = 0; column < n2; column++)
        {
            printf("Please enter the element at %d,%d: ", row, column);
            scanf("%d", &matrix2[row][column]);
        }
    }

    if (n1 != m2)
    {
        printf("These matrices can't be multiplied. Please try again...");
    }
    else
    {
        // Logic to multiply the matrices
        int resultMatrix[m1][n2];
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                resultMatrix[i][j] = 0;
                for (int k = 0; k < n1; k++)
                {
                    resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        // Printing Matrix 1
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d  ", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("\nMultiplied by\n\n");

        // Printing Matrix 2
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d  ", matrix2[i][j]);
            }
            printf("\n");
        }

        printf("\nIs Equal to\n\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d  ", resultMatrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}