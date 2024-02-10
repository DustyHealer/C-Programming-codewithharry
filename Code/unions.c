#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union Student s1;
    s1.id = 1;
    s1.fav_char = 'X';
    strcpy(s1.name, "Himanshu Singhal");
    s1.marks = 100;

    printf("The id of s1 is %d\n", s1.id);
    printf("The marks of s1 is %d\n", s1.marks);
    printf("The fav_char of s1 is %c\n", s1.fav_char);
    printf("The name of s1 is %s\n", s1.name);
    return 0;
}
