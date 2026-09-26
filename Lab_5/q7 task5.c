#include <stdio.h>

int main()
 {
    float confidence, threshold;


    printf("Enter model's confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter required confidence threshold (0-100): ");
    scanf("%f", &threshold);

 
    if (confidence >= 90) {
        printf("\nConfidence Level: Very High\n");
    }
    else if (confidence >= 75) {
        printf("\nConfidence Level: High\n");
    }
    else if (confidence >= 50) {
        printf("\nConfidence Level: Moderate\n");
    }
    else { 
        printf("\nConfidence Level: Low\n");
    }

  
    if (confidence >= threshold && confidence >= 50) {
        printf("Prediction Status: ACCEPTED\n");
    }
    else 
        printf("Prediction Status: REJECTED\n");
        return 0;
}