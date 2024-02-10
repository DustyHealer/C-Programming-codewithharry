#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float Edistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    return PI * pow(fptr(x1, y1, x2, y2), 2);
}

int main()
{
    // take x1, y1 and x2, y2 from the user using scanf
    int x1, y1, x2, y2;
    printf("Please enter the x-coordinate of the first point: ");
    scanf("%d", &x1);
    printf("Please enter the y-coordinate of the first point: ");
    scanf("%d", &y1);
    printf("Please enter the x-coordinate of the second point: ");
    scanf("%d", &x2);
    printf("Please enter the y-coordinate of the second point: ");
    scanf("%d", &y2);

    float (*fptr)(int, int, int, int);
    fptr = Edistance;

    printf("The area of circle with radius as euclidean distance between (%d,%d) and (%d,%d) is %f", x1, y1, x2, y2, areaOfCircle(x1, y1, x2, y2, fptr));
    return 0;
}
