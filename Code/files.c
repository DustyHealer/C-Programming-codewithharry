#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // char string[34];
    char string[64] = "This content has produced by Tutorial64.c";
    // Reading a file
    // ptr = fopen("myFile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of the file has %s\n", string);

    // Writing a file
    ptr = fopen("myFile.txt", "w");
    fprintf(ptr, "%s", string);
    return 0;
}