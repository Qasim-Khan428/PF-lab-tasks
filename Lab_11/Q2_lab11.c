#include <stdio.h>

struct Product {
    int   id;
    char  name[50];
    char  category[30];
    float price;
    int   stock;
};

/* Uses the dot operator to access members and applies a 5% discount */
void displayProductDetails(struct Product p) {
    float discount   = p.price * 0.05f;
    float finalPrice = p.price - discount;

    printf("Product ID      : %d\n", p.id);
    printf("Name            : %s\n", p.name);
    printf("Category        : %s\n", p.category);
    printf("Original Price  : %.2f\n", p.price);
    printf("Discount (5%%)   : %.2f\n", discount);
    printf("Final Price     : %.2f\n", finalPrice);
    printf("Stock Available : %d\n", p.stock);
    printf("----------------------------------\n");
}

int main() {
    struct Product p1 = {101, "Wireless Mouse", "Electronics", 2500.00f, 40};
    struct Product p2 = {102, "Running Shoes",  "Footwear",    8000.00f, 15};
    struct Product p3 = {103, "Notebook Pack",  "Stationery",   600.00f, 120};

    displayProductDetails(p1);
    displayProductDetails(p2);
    displayProductDetails(p3);
    return 0;
}
