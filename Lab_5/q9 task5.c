#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2,result;
    int operation;
    printf("=======WELCOME TO MATHEMATIC CALCULATOR=======\n");

    printf("Enter num1:");
    scanf("%f", &num1);

    printf("=========enter opreration========\n1.square root\n2.power\n3.Absolute value\n4.floor\n5.ceiling\n");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        result = sqrt(num1);
        printf("the square root is %.2f", result);
        break;
    case 2:
        printf("Enter num2:");
        scanf("%f", &num2);
        result = pow(num1, num2);
        printf("the power is %.2f", result);
        break;
    case 3:
        result = fabs(num1);
        printf("The absolute value is %.2f", result);
        break;
    case 4:
        result = floor(num1);
        printf("The Floor is %.2f", result);
        break;
    case 5:
        result = ceil(num1);
        printf("The ceiling value is %.2f", result);
        break;

    default:
        printf("Invalid: Negative input for square root or invalid menu choice");
    }
    return 0;
}