#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myFile.txt", "r");

    // Read a char
    // char c = fgetc(ptr);
    // printf("The charachter i read is %c\n", c);
    // c = fgetc(ptr);
    // printf("The charachter i read is %c\n", c);

    // Read a string
    // char str[200];
    // fgets(str, 100, ptr);
    // printf("The string is %s\n", str);

    //Write a char
    ptr = fopen("myFile.txt", "w");
    fputc('o', ptr);
    fputs("Hello World, this is writing a string", ptr);

    //Write a string

    fclose(ptr);
    return 0;
}