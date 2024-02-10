#include <stdio.h>
#include <stdlib.h>

// int *functionDangling();

int main()
{
    // Case 1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is a dangaling pointer now
    printf("The address in the pointer is %p\n", ptr);
    printf("The value stored in the pointer is %d\n", *ptr);

    // Case 2: Function returning local variable address
    // int *dangPtr = functionDangling(); // dangPtr is a dangaling pointer now

    // Case 3: If a variable goes out of scope
    int *dangPtr3;
    {
        int a = 12;
        dangPtr3 = &a;
    }
    // dangptr3 is a dangaling pointer now
    printf("The address in the pointer is %p\n", dangPtr3);
    printf("The value stored in the pointer is %d\n", *dangPtr3);

    return 0;
}

// int *functionDangling()
// {
//     int a = 34;
//     int b = 364;
//     int sum = a + b;
//     return &sum;
// }
