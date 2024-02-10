#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen.
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically

    int numberOfEmployees = 3;
    int size;
    char *ptr;
    for (int i = 1; i <= numberOfEmployees; i++)
    {
        printf("Enter the number of charachters in your employee id %d: ", i);
        scanf("%d", &size);
        ptr = (char *)calloc(size, sizeof(char));
        printf("Please enter the employee id of employee %d: ", i);
        scanf("%s", ptr);
        printf("The employee id of employee %d is %s\n", i, ptr);
        free(ptr);
        printf("\n");
    }

    return 0;
}
