#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Himanshu";
    char s2[] = "Ravi";
    char s3[54];
    // printf("%s\n", strcat(s1,s2));
    strcpy(s3, strcat(s1, s2));
    printf("The length of %s is %d\n", s1, strlen(s1));
    printf("The length of %s is %d\n", s2, strlen(s2));
    printf("The length of %s is %d\n", s3, strlen(s3));
    printf("The comparison of %s and %s is %d\n", s1, s3, strcmp(s1, s3));
    printf("The reverse of %s is %d\n", s1, strrev(s1));
    printf("The reverse of %s is %d\n", s2, strrev(s2));
    // printf("The length of %s is %d\n", s1, strlen(s1));
    // printf("The length of %s is %d\n", s2, strlen(s2));
    return 0;
}
