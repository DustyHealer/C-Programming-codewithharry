#include <stdio.h>

void Swap(int *a, int *b);
void Quiz(int *a, int *b);

int main()
{
    int a = 74, b = 34;
    printf("The value of a before swap = %d\n", a);
    printf("The value of b before swap = %d\n", b);
    Quiz(&a, &b);
    printf("The value of a after swap = %d\n", a);
    printf("The value of b after swap = %d\n", b);
    return 0;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void Quiz(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - 2*(*b);
}
