#include <stdio.h>

int main()
{
    int a = 343;
    float b = 3.14;
    int *ptra = &a; // int type pointer can only store int variables address
    float *ptrb = &b; // float type pointer can only store float variables address
    printf("Print address of a is %d\n", *ptra);
    printf("Print address of b is %f\n", *ptrb);

    void *ptr = &a; // void type pointers can store any datatype variables
    printf("Print address of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("Print address of b is %f\n", *((float *)ptr));

    return 0;
}