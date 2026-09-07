#include <stdio.h>
int main() {
    char name[100];
    int quantity;
    float price;
    printf("enter Prodct name:");
    fgets(name, sizeof(name), stdin);
    printf("Enter Quantity:");
    scanf("%d", &quantity);
    printf("Enter Price:");
    scanf("%f", &price);
    printf("Product name:%s", name);
    printf("Quantity:%d", quantity);
    printf("\nPrice:%.2f", price);
    return 0;
}