#include <stdio.h>
#include <stdbool.h>
int main()
{
    float ma;
    int pl;
    bool mas;
    printf("Enter Model acuracy (percentage): ");
    scanf("%f", &ma);
    printf("Enter prediction latency (in ms): ");
    scanf("%d", &pl);
    printf("enter model approval status (1 for approved, 0 for not approved): ");
    scanf("%d", &mas);

    if (ma >= 90 && pl <= 100 && mas == 1)
    {
        printf("\nModel can be deployed.\n");
    }
    else
    {
        printf("\nModel cannot be deployed because:\n");

        if (ma < 90)
        {
            printf("-Accuracy too low\n");
        }

        if (pl > 100.00)
        {
            printf("-Latency too high\n");
        }

        if (mas==0)
        {
            printf("-Model not approved\n");
        }
    }

    return 0;
}