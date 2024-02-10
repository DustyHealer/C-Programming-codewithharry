#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int size;
    printf("Enter the number of records you want to store in array: ");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value no.%d of this array\n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }

    return 0;
}
