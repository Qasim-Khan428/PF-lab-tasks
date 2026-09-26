#include <stdio.h>

#define VIEW    1   // binary: 0001
#define TRAIN   2   // binary: 0010
#define TEST    4   // binary: 0100
#define DEPLOY  8   // binary: 1000

int main() {
    int permission;

    // ---- Input ----
    printf("Enter user's permission value: ");
    scanf("%d", &permission);

    printf("\n--- Permission Check ---\n");


    if (permission & VIEW) {
        printf("View: Allowed\n");
    } else {
        printf("View: Not Allowed\n");
    }

    if (permission & TRAIN) {
        printf("Train: Allowed\n");
    } else {
        printf("Train: Not Allowed\n");
    }

    if (permission & TEST) {
        printf("Test: Allowed\n");
    } else {
        printf("Test: Not Allowed\n");
    }

    if (permission & DEPLOY) {
        printf("Deploy: Allowed\n");
    } else {
        printf("Deploy: Not Allowed\n");
    }

   
    printf("\n--- Special Check ---\n");
    if ((permission & TRAIN) && (permission & DEPLOY)) {
        printf("User has BOTH Training and Deployment permissions.\n");
    } else {
        printf("User does NOT have both Training and Deployment permissions.\n");
    }

    return 0;
}