#include <stdio.h>

int isPalindrome(int num);

int main()
{
    int number;
    printf("\nEnter the number to check whether it is palindrome or not: ");
    scanf("%d", &number);

    if (isPalindrome(number))
    {
        printf("This number is a palindrome\n\n");
    }
    else
    {
        printf("This number is not  a palindrome\n\n");
    }

    return 0;
}

int isPalindrome(int num)
{
    int original = num;
    int reverse = 0, remainder = 0;
    while (original > 0)
    {
        remainder = original % 10;
        original = original / 10;
        reverse = reverse * 10 + remainder;
    }

    if (reverse == num)
    {
        return 1;
    }
    return 0;
}