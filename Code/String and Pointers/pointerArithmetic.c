#include <stdio.h>

int main()
{
    // printf("Size of int is %d\n", sizeof(int));
    // printf("Size of char is %d\n", sizeof(char));

    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1);

    // char b = '3';
    // char* ptrb = &b;
    // printf("%d\n", ptrb);
    // printf("%d\n", ptrb + 1);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i++)
    {
        printf("Address of %d element of array = %d\n", i + 1, &arr[i]);
        printf("Address pf %d element using pointer = %d\n", i + 1, arr + i);
        printf("\n");
    }

    return 0;
}
