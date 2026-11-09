#include <stdio.h>

void withdrawl(int *amnt, int *bal)
{
    int FinalAmount;
    if ((*amnt) < (*bal))
    {
        FinalAmount = (*bal) - (*amnt);
        printf("The bankBalance is %d\n", FinalAmount);
    }
    else
    
        printf("Invalid input");
    
}
void deposit(int *amnt, int *bal)
{
    int FinalAmount;
    FinalAmount = (*amnt)+(*bal);
    printf("The BankBalance is:%d\n",FinalAmount);
}
int main()
{

    int amount, balance = 100000, type, operation;
    printf("Enter the amount:");
    scanf("%d", &amount);
    int *amnt = &amount;
    int *bal = &balance;
    printf("Enter transaction type(1.credit,2.debit):");
    scanf("%d", &type);
    if (type < 0 || type > 2)
    {
        printf("invalid type:");
        return 1;
    }
    printf("Enter the operation(1.withdrawl,2.deposit):");
    scanf("%d",&operation);
    switch (operation)
    {
    case 1:
        withdrawl(amnt, bal); break;
    case 2:
        deposit(amnt, bal); break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}