#include <stdio.h>

int func1(int array[]);
int func2(int *marks);

int main()
{
    int marks[] = {78, 91, 56, 83};
    func1(marks);
    printf("Value updated inside func1 = %d\n", marks[2]);
    func2(marks);
    printf("Value updated inside func1 = %d\n", marks[0]);
    return 0;
}

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, array[i]);
    }

    array[2] = 64;
}

int func2(int *marks)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, *(marks+i));
    }

    *marks = 69;
}
