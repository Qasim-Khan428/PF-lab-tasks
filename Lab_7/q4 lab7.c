#include <stdio.h>
#include <string.h>

int main()
{
    char word_grid[3][100];
    char word[50];
    char longest[50];

    int max_length = 0;
    int max_row = 0;
    int max_col = 0;

    // Input 3 rows
    for (int i = 0; i < 3; i++)
    {
        printf("Enter 3 words for row %d: ", i);

        scanf(" %[^\n]", word_grid[i]);
    }

    // Process each row
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        int col = 0;

        while (word_grid[i][j] != '\0')
        {
            // Skip spaces
            while (word_grid[i][j] == ' ')
            {
                j++;
            }

            if (word_grid[i][j] == '\0')
                break;

            // Copy one word
            int k = 0;

            while (word_grid[i][j] != ' ' &&
                   word_grid[i][j] != '\0')
            {
                word[k] = word_grid[i][j];
                k++;
                j++;
            }

            word[k] = '\0';

            // Check word length
            if (k > max_length)
            {
                max_length = k;

                for (int x = 0; x <= k; x++)
                {
                    longest[x] = word[x];
                }

                max_row = i;
                max_col = col;
            }

            col++;
        }
    }

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", max_length);
    printf("Row Index: %d\n", max_row);
    printf("Column Index: %d\n", max_col);

    return 0;
}