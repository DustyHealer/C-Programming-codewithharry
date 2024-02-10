#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    typedef unsigned long ul;
    ul l1, l2, l3;

    typedef int integer;
    int b = 30;
    integer a = 30;
    // printf("Value of a is: %d", a);

    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("Value of s1 id is: %d\n", s1.id);
    printf("Value of s2 id is: %d\n", s2.id);
    return 0;
}
