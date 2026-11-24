#include <stdio.h>

#define SIZE 5

struct Item {
    int   id;
    char  name[50];
    int   quantity;
    float unitPrice;
};

int main() {
    struct Item items[SIZE];
    int i, searchID, found = 0;
    float totalValue = 0;

    /* Accept details of 5 items */
    for (i = 0; i < SIZE; i++) {
        printf("\n--- Enter details for Item %d ---\n", i + 1);
        printf("ID        : ");
        scanf("%d", &items[i].id);
        printf("Name      : ");
        scanf(" %49[^\n]", items[i].name);
        printf("Quantity  : ");
        scanf("%d", &items[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &items[i].unitPrice);

        totalValue += items[i].quantity * items[i].unitPrice;
    }

    printf("\nTotal Inventory Value of Warehouse: %.2f\n", totalValue);

    /* Search by Item ID */
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < SIZE; i++) {
        if (items[i].id == searchID) {
            printf("\nItem Found!\n");
            printf("ID         : %d\n", items[i].id);
            printf("Name       : %s\n", items[i].name);
            printf("Quantity   : %d\n", items[i].quantity);
            printf("Unit Price : %.2f\n", items[i].unitPrice);
            printf("Total Value: %.2f\n", items[i].quantity * items[i].unitPrice);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Item with ID %d not found.\n", searchID);

    return 0;
}
