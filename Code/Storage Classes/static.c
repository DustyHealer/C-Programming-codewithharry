#include <stdio.h>
// #include "extern.c"

int sum = 98;

int func1(int a, int b)
{
    // auto int sum; // This is same as int sum. By default local variables are auto
    static int myVar;
    myVar++;
    printf("%d\n", myVar);
    return myVar;
}

int main()
{
    int myVar = func1(5, 3);
    myVar = func1(5, 3);
    myVar = func1(5, 3);
    myVar = func1(5, 3);
    return 0;
}
