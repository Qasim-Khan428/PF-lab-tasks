#include <stdio.h>

int main(void) {
    FILE *fptr;
    int rollNo;
    char name[50];
    float marks;

    fptr = fopen("marks.txt", "r");

    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    printf("%-10s %-20s %-8s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------\n");

    while (fscanf(fptr, "%d %s %f", &rollNo, name, &marks) != EOF) {
        printf("%-10d %-20s %-8.1f\n", rollNo, name, marks);
    }

    fclose(fptr);
    return 0;
}