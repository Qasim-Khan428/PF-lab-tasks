
#include <stdio.h>

int main(void) {
    int image[3][3];
    int (*ptr)[3] = image;   
    int i, j;

    
    printf("Enter values for the 3 x 3 image (9 pixels):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Pixel [%d][%d]: ", i, j);
            scanf("%d", *(ptr + i) + j);  
        }
    }

   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            *(*(ptr + i) + j) *= 2;
        }
    }

    
    printf("\nUpdated image (brightness doubled):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
