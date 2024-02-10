#include <stdio.h>

void PrintStrings(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
}

int main()
{
    // char name[9] = "Himanshu";
    /// char name[] = {'H', 'i', 'm', 'a', 'n', 's', 'h', 'u', '\0'};
    char name[8] = "Himanshu";
    char input[50];
    printf("Please enter the input string here: \n");
    fgets(input, sizeof(input), stdin);
    printf("Print string using printf: \n");
    printf("%s\n", input);
    printf("Print string using puts: \n");
    puts(input);
    printf("Print string using custom function: \n");
    PrintStrings(input);
    return 0;
}
