#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord);

int main()
{
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry
    // {{item}}   - Table Fan
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    // Read the file
    ptr = fopen("Letter.txt", "r");
    ptr2 = fopen("GeneratedBill.txt", "w");

    // fscanf will return 1 untill read is successful
    char str[200];
    fgets(str, 200, ptr);
    printf("Bill Template is:\n%s", str);

    // Replace the placeholders with actual values
    char *newStr = str;
    newStr = replaceWord(str, "{{name}}", "Himanshu");
    newStr = replaceWord(newStr, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");

    printf("Final generated bill is:\n%s", newStr);
    fprintf(ptr2, newStr);

    // Close both the files
    fclose(ptr);
    fclose(ptr2);

    return 0;
}

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);

    // Count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Replace the old word with the new word
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(resultString, newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString += '\0';
    return resultString;
}