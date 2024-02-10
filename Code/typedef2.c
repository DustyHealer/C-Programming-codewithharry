#include <stdio.h>

int main()
{
    typedef int* intptr;
    intptr a, b;
    int c = 88;
    a = &c;
    b = c;
    return 0;
}
