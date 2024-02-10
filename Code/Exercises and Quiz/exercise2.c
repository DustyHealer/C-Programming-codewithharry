#include <stdio.h>
float ConvertKilometersToMiles(float num);
float ConvertInchesToFoot(float num);
float ConvertCentimetersToInches(float num);
float ConvertPoundToKilograms(float num);
float ConvertInchesToMeters(float num);

int main(int argc, char const *argv[])
{
    char op;
    printf("\nThis program performs:\n");
    printf("\t1.Kilometers to Miles\n");
    printf("\t2.Inches to Foot\n");
    printf("\t3.Centimeters to Inches\n");
    printf("\t4.Pounds to Kilograms\n");
    printf("\t5.Inches to Meters\n");
    printf("\tEnter q to quit\n");

    float input, result;
    while (1)
    {
        printf("\nChoose your operation: ");
        scanf(" %c", &op);

        printf("Enter the number you want to convert: ");
        scanf("%f", &input);

        switch (op)
        {
        case '1':
            result = ConvertKilometersToMiles(input);
            break;
        case '2':
            result = ConvertInchesToFoot(input);
            break;
        case '3':
            result = ConvertCentimetersToInches(input);
            break;
        case '4':
            result = ConvertPoundToKilograms(input);
            break;
        case '5':
            result = ConvertInchesToMeters(input);
            break;
        case 'q':
            printf("Quitting Program......");
            goto end;
            break;
        default:
            printf("Invalid input. Try again...");
            break;
        }
        printf("The result = %f\n", result);
    }

end:
    return 0;
}

float ConvertKilometersToMiles(float num)
{
    // 1 km = 0.621371 miles
    return num * 0.621371;
}

float ConvertInchesToFoot(float num)
{
    // 1 inch = 0.0833333 foot
    return num * 0.0833333;
}

float ConvertCentimetersToInches(float num)
{
    // 1 cm = 0.393701 inches
    return num * 0.393701;
}

float ConvertPoundToKilograms(float num)
{
    // 1 pound = 0.453592 kilo
    return num * 0.453592;
}

float ConvertInchesToMeters(float num)
{
    // 1 inch = 0.0254 meter
    return num * 0.0254;
}