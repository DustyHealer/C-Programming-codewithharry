#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the operation.
    // The next arguments being the two numbers. For example:
    // >>Command.c add 45 4
    // >>49
    //this is a c program this is a cm

    if (argc == 4)
    {
        const char *operation = argv[1];
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);

        if (strcmp(operation, "add") == 0)
        {
            printf("Addition of %d and %d is %d", num1, num2, num1 + num2);
        }
        else if (strcmp(operation, "subtract") == 0)
        {
            printf("Subtraction of %d and %d is %d", num1, num2, num1 - num2);
        }
        else if (strcmp(operation, "divide") == 0)
        {
            printf("Division of %d and %d is %d", num1, num2, num1 / num2);
        }
        else if (strcmp(operation, "multiply") == 0)
        {
            printf("Multiplication of %d and %d is %d", num1, num2, num1 * num2);
        }
        else
        {
            printf("Please enter the correct opearation..");
        }
    }
    else
    {
        printf("Please enter the correct arguments...");
    }

    return 0;
}