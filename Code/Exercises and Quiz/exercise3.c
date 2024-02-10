#include <stdio.h>
int fib_iterative(int n);
int fib_recursive(int n);

int main(int argc, char const *argv[])
{
    /* code */
    printf("Number at position 42 using fib_iterative is %d\n", fib_iterative(44));
    printf("Number at position 42 using fib_recursive is %d\n", fib_recursive(44));
    return 0;
}

//Iterative is faster than the recursive approach
int fib_iterative(int n) {
    int first = 0;
    int second = 1;

    if(n <= 2)
        return n-1;
    for (int i = 3; i <= n; i++)
    {
        second = first + second;
        first = second - first;
    }
    return second;
}

int fib_recursive(int n) {
    int current = 0;
    int first = 0;
    int second = 1;

    if(n <= 2)
        return n-1;
    return fib_recursive(n-1) + fib_recursive(n-2);
}