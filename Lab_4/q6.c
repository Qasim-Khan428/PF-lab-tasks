#include <stdio.h>

int main()
{
    int obstacle, person;
    int battery;

    printf("Enter obstacle (1 = Yes, 0 = No): ");
    scanf("%d", &obstacle);

    printf("Enter person (1 = Yes, 0 = No): ");
    scanf("%d", &person);

    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    if (obstacle== 1)
    {
        if (person== 1)
        {
            printf("Emergency Stop\n");
        }
        if (person== 0)
        {
            printf("Change Direction\n");
        }
    }
    else
    {
        if (battery < 20)
        {
            printf("Return to Charging Station\n");
        }
        else
        {
            printf("Continue Moving\n");
        }
    }

    return 0;
}