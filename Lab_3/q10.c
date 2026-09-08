#include <stdio.h>
int main() {
    char name[100];
    int age;
    float height,CGPA;
    char grade;
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    printf("enter age:");
    scanf("%d", &age);
    printf("enter height:");
    scanf("%f", &height);
    printf("enter CGPA:");
    scanf("%f", &CGPA);
    printf("enter grade:");
    scanf(" %c", &grade);
    printf("\n==============STUDENT REPORT==============\n");
    printf("\nName:\t %s", name);
    printf("Age:\t %d", age);
    printf("\nHeight:\t %f", height);
    printf("\nCGPA:\t %.2f", CGPA);
    printf("\nGrade:\t %c", grade);
    return 0;

}
