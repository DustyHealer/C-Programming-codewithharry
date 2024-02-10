#include <stdio.h>

int main()
{
    int age;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the age of the student: ");
        scanf("%d", &age);
        if (age > 10)
        {
            printf("Congrats you have broken free\n");
            break;
        }
    }

    if (age < 10)
    {
        printf("You Lose!!! Go buy bobs and vegana");
    }
}