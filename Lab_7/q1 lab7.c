#include<stdio.h>
int main()
{
    char student_name[3][50];
    int marks[3][3];
    float average;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student %d", i + 1);
        getchar();
        scanf("%[^\n]", student_name[i]);
        printf("Enter marks for 3 subjects:\n");

        for (int j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    getchar();
    printf("\n========== STUDENT REPORT ==========\n");

    for (int i = 0; i < 3; i++)
    {
        int total = 0;

        for (int j = 0; j < 3; j++)
        {
            total = total + marks[i][j];
        }

        average = total / 3.0;

        printf("Name: %-25s Average: %.2f\n",
               student_name[i], average);
    }
    return 0;
}