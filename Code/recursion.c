#include <stdio.h>
int Factorial(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number for factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, Factorial(num));
    return 0;
}

int Factorial(int num) {
    if(num == 1 || num == 0) 
        return 1;
    return (num * Factorial(num - 1));
}