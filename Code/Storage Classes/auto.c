#include <stdio.h>
//#include "extern.c"

int sum = 98;

int func1(int a, int b)
{
    //auto int sum; // This is same as int sum. By default local variables are auto
    extern int sum;
    //sum = a + b;
    return sum;
}

int main()
{
    int sum = func1(5, 3);
    printf("%d", sum);
    return 0;
}
