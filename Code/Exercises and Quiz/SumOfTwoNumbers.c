#include<stdio.h>

int main()
{
    //Enter code here
    int a, b = 0;

    //Take first number from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    //Take second number from the user
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The Sum of %d and %d = %d", a, b, a+b);
    return 0;
}