#include <stdio.h>

int main()
{
    char logs[3][30];
    char username[30], status[30], timestamp[30];
    int count = 0;

    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter log entry %d: ", i + 1);

        scanf("%[^,],%[^,],%s",
              username, status, timestamp);

      
        snprintf(logs[i], 30, "%s %s %s",
                 username, status, timestamp);
    }

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; logs[i][j] != '\0'; j++)
        {
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z')
            {
                count++;
            }
        }
    }

    printf("\nTotal uppercase letters: %d\n", count);

    return 0;
}