#include <stdio.h>

int sum(int a, int b);

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2));
    int (*fptr)(int, int); // Declaring a function pointer
    fptr = &sum;           // Initialize
    int d = (*fptr)(4, 6); // Derefrencing the funtion pointer
    printf("The value of d is %d\n", d);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}