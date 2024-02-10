#include <stdio.h>
#define PI 3.14
#define SQUARE(r) r *r

int main()
{
    float var = PI;
    int radius = 4;
    printf("Value of PI is %f\n", var);
    printf("Area of circle is %f\n", PI * SQUARE(radius));

    return 0;
}