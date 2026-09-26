#include <stdio.h>
#include <math.h>

#define VIEW 1   // 0001
#define TRAIN 2  // 0010
#define TEST 4   // 0100
#define DEPLOY 8 // 1000

int main()
{
    float accuracy, confidence;
    int datasetSize, userRole, modelStatus, permission;

    printf("Enter model accuracy (%%): ");
    scanf("%f", &accuracy);

    printf("Enter model confidence (%%): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Admin, 2=Developer, 3=Researcher): ");
    scanf("%d", &userRole);

    printf("Enter model status (1=Ready, 2=Testing, 3=Training): ");
    scanf("%d", &modelStatus);

    printf("Enter user permission value: ");
    scanf("%d", &permission);

    float modelScore = (accuracy + confidence) / 2.0;

    float roundedScore = round(modelScore * 100) / 100.0;

    int hasDeployPermission = (permission & DEPLOY) ? 1 : 0;

    printf("\n--- Model & User Information ---\n");
    switch (userRole)
    {
    case 1:
        printf("User Role: Admin\n");
        switch (modelStatus)
        {
        case 1:
            printf("Model Status: Ready\n");
            break;
        case 2:
            printf("Model Status: Testing\n");
            break;
        case 3:
            printf("Model Status: Training\n");
            break;
        default:
            printf("Model Status: Unknown\n");
        }
        break;

    case 2:
        printf("User Role: Developer\n");
        switch (modelStatus)
        {
        case 1:
            printf("Model Status: Ready\n");
            break;
        case 2:
            printf("Model Status: Testing\n");
            break;
        case 3:
            printf("Model Status: Training\n");
            break;
        default:
            printf("Model Status: Unknown\n");
        }
        break;

    case 3:
        printf("User Role: Researcher\n");
        switch (modelStatus)
        {
        case 1:
            printf("Model Status: Ready\n");
            break;
        case 2:
            printf("Model Status: Testing\n");
            break;
        case 3:
            printf("Model Status: Training\n");
            break;
        default:
            printf("Model Status: Unknown\n");
        }
        break;

    default:
        printf("Invalid User Role\n");
    }

    printf("Model Score: %.2f\n", roundedScore);

    printf("\n--- Deployment Readiness Check ---\n");
    if (accuracy >= 80 && confidence >= 75)
    {
        if (datasetSize >= 1000)
        {
            if (modelStatus == 1)
            {
                if (hasDeployPermission)
                {
                    printf("Deployment Status: READY FOR DEPLOYMENT\n");
                }
                else
                {
                    printf("Deployment Status: NOT READY (no deploy permission)\n");
                }
            }
            else
            {
                printf("Deployment Status: NOT READY (model status is not Ready)\n");
            }
        }
        else
        {
            printf("Deployment Status: NOT READY (dataset too small)\n");
        }
    }
    else
    {
        printf("Deployment Status: NOT READY (accuracy or confidence too low)\n");
    }

    printf("\n--- Memory Info (sizeof) ---\n");
    printf("Size of accuracy (float): %zu bytes\n", sizeof(accuracy));
    printf("Size of datasetSize (int): %zu bytes\n", sizeof(datasetSize));
    printf("Size of modelScore (float): %zu bytes\n", sizeof(modelScore));

    return 0;
}