#include <stdio.h>

int main()
{
    float sensor_data[3][4];
    int column;

    // Input sensor data
    printf("Enter temperature data for 3 days and 4 sensors:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Day %d:\n", i + 1);

        for (int j = 0; j < 4; j++)
        {
            printf("Sensor %d: ", j);
            scanf("%f", &sensor_data[i][j]);
        }
    }

    // Ask which column to delete
    printf("\nEnter sensor column index to delete (0-3): ");
    scanf("%d", &column);

    // Shift columns to the left
    for (int i = 0; i < 3; i++)
    {
        for (int j = column; j < 3; j++)
        {
            sensor_data[i][j] = sensor_data[i][j + 1];
        }
    }

    // Display resulting 3x3 matrix
    printf("\nUpdated Sensor Matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f\t", sensor_data[i][j]);
        }

        printf("\n");
    }

    return 0;
}