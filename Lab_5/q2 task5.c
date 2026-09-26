#include <stdio.h>
int main() {
    int age, monthly_income, credit_score, existing_loan_status;
    printf("Enter age: \n");
    scanf("%d", &age);
    printf("Enter monthly income: \n");
    scanf("%d", &monthly_income);
    printf("Enter credit score: \n");
    scanf("%d", &credit_score);
    printf("Enter existing loan status (1 for yes, 0 for no): \n");
    scanf("%d", &existing_loan_status);
    if (age >= 21 && monthly_income >= 100000 && credit_score >= 750 && existing_loan_status == 0) {
        printf("High approval chance.\n");
    } else if(age >= 21 && monthly_income >= 75000 && credit_score >= 650 && existing_loan_status == 1) {
        printf("Manual review.\n");
    }
    else if (age >= 21 && monthly_income >= 50000 && credit_score >= 600) {
        printf("possibly eligible.\n");
    } else {
        printf("Does not meet eligibility criteria.\n");
    }
    return 0;

}