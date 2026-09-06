#include <stdio.h>
int main()
{
    char grade;
    int age;
    float height;
    printf("enter age:");
    scanf("%d",&age);
    printf("enter height in feet:");
    scanf("%f",&height);
    printf("enter grade:");
    scanf(" %c", &grade);
    printf("\n--- Student Information ---\n");
    printf("Age   : %d years old\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade : %c\n", grade);
    return 0;
}