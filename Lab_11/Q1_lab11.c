#include <stdio.h>
#include <stdlib.h>

/* Recursively sums the digits of n */
int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

/* Recursively computes the digital root (single-digit checksum) */
int calculateChecksum(int transactionID) {
    if (transactionID < 0)
        transactionID = -transactionID;

    if (transactionID < 10)              /* base case: single digit */
        return transactionID;

    return calculateChecksum(sumDigits(transactionID));
}

int main() {
    int id;
    printf("Enter Transaction ID: ");
    scanf("%d", &id);
    printf("Checksum (digital root) of %d = %d\n", id, calculateChecksum(id));
    return 0;
}
