#include <stdio.h>

int main(void) {
    char name[50];
    int accountNo;
    float amount;
    FILE *fptr;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);            

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    fptr = fopen("bank_log.txt", "a");   

    if (fptr == NULL) {
        printf("Error: Could not open bank_log.txt\n");
        return 1;
    }

    fprintf(fptr, "Name: %s | Account: %d | Withdrawal: %.2f\n",
            name, accountNo, amount);
    fclose(fptr);

    printf("Transaction saved successfully.\n");
    return 0;
}