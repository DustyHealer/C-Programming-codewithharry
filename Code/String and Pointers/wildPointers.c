#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 334;
    int *ptr;  // This is a wild pointer
    //*ptr = 34; // This is bad practise in code
    ptr = &a;  // This is no longer a wild pointer
    printf("The value of a is %d", *ptr);
    return 0;
}