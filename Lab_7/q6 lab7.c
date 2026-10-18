#include <stdio.h>

int main()
{
    int shifts[4][3];
    int index;

    // Input original 3x3 matrix
    printf("Enter production data for 3 workstations:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Workstation %d:\n", i);

        for (int j = 0; j < 3; j++)
        {
            printf("Shift %d: ", j);
            scanf("%d", &shifts[i][j]);
        }
    }

    // Ask for insertion index
    printf("\nEnter row index for new workstation (0-3): ");
    scanf("%d", &index);

    // Shift rows downward
    for (int i = 3; i > index; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    // Input new row
    printf("Enter 3 production values for the new workstation:\n");

    for (int j = 0; j < 3; j++)
    {
        printf("Shift %d: ", j);
        scanf("%d", &shifts[index][j]);
    }

    // Display resulting 4x3 matrix
    printf("\nResulting Matrix:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", shifts[i][j]);
        }

        printf("\n");
    }

    return 0;
}