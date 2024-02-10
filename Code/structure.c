#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} s1, s2, s3;
// struct Student s1, s2, s3;

void PrintStudentDetails();

int main()
{
    s1.id = 1;
    s2.id = 2;
    s3.id = 3;
    s1.marks = 92;
    s2.marks = 73;
    s3.marks = 66;
    s1.fav_char = 'X';
    s2.fav_char = 'R';
    s3.fav_char = 'S';
    strcpy(s1.name, "Himanshu Singhal");
    strcpy(s2.name, "Ravi Joura");
    strcpy(s3.name, "Rupinder Singh");
    PrintStudentDetails();
    return 0;
}

void PrintStudentDetails()
{
    printf("Id of %s is %d\n", s1.name, s1.id);
    printf("Marks of %s is %d\n", s1.name, s1.marks);
    printf("Fav char of %s is %c\n", s1.name, s1.fav_char);
    printf("Id of %s is %d\n", s2.name, s2.id);
    printf("Marks of %s is %d\n", s2.name, s2.marks);
    printf("Fav char of %s is %c\n", s2.name, s2.fav_char);
    printf("Id of %s is %d\n", s3.name, s3.id);
    printf("Marks of %s is %d\n", s3.name, s3.marks);
    printf("Fav char of %s is %c\n", s3.name, s3.fav_char);
}
