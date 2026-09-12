#include <stdio.h>
#include <stdbool.h>
int main()
{
    int role, security_level;
    bool status;
    printf("Enter role: 1= admin \n 2= researcher\n 3=student\n ");
    scanf("%d", &role);
    printf("Enter account status (1= active,0= inactive) ");
    scanf("%d", &status);
    printf("Enter security level : ");
    scanf("%d", &security_level);
    if (status == 0)
        printf("access denied.\n");
    else
    {
        switch (role)
        {
        case 1:
            if (security_level >= 3)
            {
                printf("access level admin.\n");
            }
            else
            {
                printf("access denied.\n");
            }
            break;
        case 2:
            if (security_level >= 2)
            {
                printf("access level researcher.\n");
            }
            else
            {
                printf("access denied.\n");
            }
            break;
        case 3:
            if (security_level >= 1)
            {
                printf("access level student.\n");
            }
            else
            {
                printf("access denied.\n");
            }
            break;
        default:
            printf("access denied.\n");
        }
    }
    return 0;
}