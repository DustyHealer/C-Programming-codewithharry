#include <stdio.h>
/*
Manage a travel agency where
Drivers can input their details - Name, Driving License Number, Route, TotalKms
Program should -
1. Take number of drivers or fix number as 3.
2. Drivers should be able to provide details.
3. Print driver details in beautiful format.
4. Use Structures.
*/

typedef struct Driver
{
    char name[50];
    char dlNumber[50];
    char route[100];
    int totalKms;
} Driver;

Driver d1, d2, d3;

void takeDriverDetails(Driver *d);
void printDriverDetails(Driver *d);

int main()
{
    printf("Please input the details of the first driver..\n");
    takeDriverDetails(&d1);
    printf("Please input the details of the second driver..\n");
    takeDriverDetails(&d2);
    printf("Please input the details of the third driver..\n");
    takeDriverDetails(&d3);

    printf("Please find the details of all the drivers below:\n");
    printDriverDetails(&d1);
    printDriverDetails(&d2);
    printDriverDetails(&d3);
    return 0;
}

void takeDriverDetails(Driver *d)
{
    printf("Please enter the name of the driver: ");
    scanf(" %s", d->name);
    printf("Please enter the driving License Number of the driver: ");
    scanf(" %s", d->dlNumber);
    printf("Please enter the route of the driver: ");
    scanf(" %s", d->route);
    printf("Please enter the total Kms driven by the driver: ");
    scanf("%d", &d->totalKms);
    printf("\n");
}

void printDriverDetails(Driver *d)
{
    printf("Name of the driver is %s\n", d->name);
    printf("Driving License Number of the driver is %s\n", d->dlNumber);
    printf("Route of the driver is %s\n", d->route);
    printf("Total Kms driven by the driver is %d\n", d->totalKms);
    printf("\n");
}
