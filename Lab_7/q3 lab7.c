#include <stdio.h>

int main()
{
    char secret_messages[3][100];
    int spaces, words;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter secret message %d: ", i + 1);

        scanf(" %99[A-Z ]", secret_messages[i]);
    }

    printf("\n===== SECRET MESSAGES =====\n");

    for (int i = 0; i < 3; i++)
    {
        spaces = 0;
        words = 0;

        for (int j = 0; secret_messages[i][j] != '\0'; j++)
        {
            if (secret_messages[i][j] == ' ')
            {
                spaces++;
            }

            if (secret_messages[i][j] != ' ' &&
                (j == 0 || secret_messages[i][j - 1] == ' '))
            {
                words++;
            }
        }

        printf("Message: %s\n", secret_messages[i]);
        printf("Spaces: %d\n", spaces);
        printf("Words: %d\n\n", words);
    }

    return 0;
}