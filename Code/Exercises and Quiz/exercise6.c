#include <stdio.h>
#include <string.h>

void parser(char *string);
void trim(char *string);

int main()
{
    char htmlInput[100] = "    <span>     This is a sample text    </span>     ";
    parser(htmlInput);
    printf("The parsed string is ~~%s~~\n", htmlInput);
    return 0;
}

void parser(char *string)
{
    int in = 0, index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
        }
        else if (string[i] == '>')
        {
            in = 0;
        }
        else if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    trim(string);
    return;
}

void trim(char *string)
{
    // printf("String input given to trim method ~~%s~~\n", string);
    //  Found the number of spaces in the beginning
    int count = 0;
    while (string[count] == ' ')
    {
        count++;
        // printf("Count updated to = %d\n", count);
    }
    // printf("Number of spaces in the beginning = %d\n", count);
    // Removing spaces from the beginning
    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = string[i + count];
        if (string[i + count] == '\0')
        {
            break;
        }
    }

    // Removing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }

    return;
}
