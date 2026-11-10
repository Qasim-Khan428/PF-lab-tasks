#include <stdio.h>
#include <string.h>

int main(void) {
    char email[100];
    char domain[100];
    char *at;

    printf("Enter employee email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    at = strchr(email, '@');         

    if (at == NULL) {
        printf("Invalid Email Format\n");
    } else {
        strcpy(domain, at + 1);       
        printf("Domain: %s\n", domain);
    }

    return 0;
}