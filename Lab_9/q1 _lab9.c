#include <stdio.h>
int calculateDiscount(int bill)
{
    char type;
    float dis;
    printf("Enter customer type(P,G,S):\n");
    scanf(" %c", &type);
    switch (type)
    {
    case 'P':
        dis = 0.2;
        break;
    case 'G':
        dis = 0.1;
        break;
    case 'S':
        dis = 0.05;
        break;

    default:
        break;
    }
        if (bill > 10000)
        {
            dis = dis + 0.02;
        }
        bill = bill - dis * bill;
        return bill;
    }

    void calculateBill(int discountedAmount)
    {
        int FinalBill, tax, shipping = 300;
        tax = 0.15 * discountedAmount;
        FinalBill = discountedAmount + tax;
        if (discountedAmount <= 5000)
        {
            FinalBill = FinalBill + shipping;
        }
        printf("The FinalBill is %d:\n", FinalBill);
        printf("The Tax Amount is %d:\n", tax);
        if(discountedAmount <= 5000)
        printf("The shipping charge is %d\n:", shipping);
    }

int main()
{
     int discounted_amount,Bill;
     printf("Enter the total Bill:");
     scanf("%d",&Bill);
     discounted_amount=calculateDiscount(Bill);
     printf("\n");
     calculateBill(discounted_amount);
     return 0;
    
}