#include <stdio.h>


void printSensorData(void *data, char type) {
    if (type == 'f') {
        float *temp = (float *)data;
        printf("Temperature: %.1f C\n", *temp);
    }
    else if (type == 'i') {
        int *motion = (int *)data;
        if (*motion == 1)
            printf("Motion Detected\n");
        else if (*motion == 0)
            printf("No Motion\n");
        else
            printf("Invalid motion value\n");
    }
    else if (type == 'c') {
        char *door = (char *)data;
        if (*door == 'O')
            printf("Door Open\n");
        else if (*door == 'C')
            printf("Door Closed\n");
        else
            printf("Invalid door value\n");
    }
    else {
        printf("Unknown data type\n");
    }
}

int main(void) {
    float temperature;
    int   motion;
    char  doorStatus;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 = motion, 0 = no motion): ");
    scanf("%d", &motion);

    printf("Enter door status (O = open, C = closed): ");
    scanf(" %c", &doorStatus);   


    printf("\n--- Smart Home Sensor Readings ---\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&doorStatus, 'c');

    return 0;
}