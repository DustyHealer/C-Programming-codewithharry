#include <stdio.h>

int main()
{
    printf("File Name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Current time is %s\n", __TIME__);
    printf("Line number is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}