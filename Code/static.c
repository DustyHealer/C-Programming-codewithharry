#include <stdio.h>

int b = 10; //Global Variable
int func1(int a);
int main()
{
    int num = 20;
    //printf("The address of b inside main function = %p\n", &b);
    int val = func1(num);
    printf("The value of func 1 is %d\n", val);
    int *ptr = &val;
    //printf("The value stored in pointer is %p\n", ptr);
    return 0;
}

int func1(int b1)
{
    printf("The value of b inside func1 is %d\n", b);
    //printf("The address of b inside func1 function = %p\n", &b);
    return b1 * 10;
}
