#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 76;
    int* ptra = &a;

    //null pointer
    int* ptrb = NULL;
    printf("Value of a = %d\n", *ptra);

    // We can use %x to print hexadecimal value and %p is for pointers.
    // We can use both to store addess
    printf("Address of a = %p\n", ptra);
    printf("Address of NULL = %p\n", ptrb);
    printf("Address of a = %p\n", &ptra);
    return 0;
}
