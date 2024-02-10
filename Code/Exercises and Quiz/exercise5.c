#include <stdio.h>

void ReverseArray(int length, int *array);
void Swap(int *a, int *b);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    int length = 7;
    printf("Array before reverse.. \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    ReverseArray(length, arr);
    printf("Array after reverse.. \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void ReverseArray(int length, int *array)
{
    int *first = array;
    int *last = array + length - 1;
    while (last > first)
    {
        Swap(first, last);
        first++;
        last--;
    }
    return;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
