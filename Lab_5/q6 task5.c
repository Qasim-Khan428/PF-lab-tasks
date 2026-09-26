#include <stdio.h>

int main() {
    int problemType, algorithmChoice;

    
    printf("Select a Problem Type:\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &problemType);

    switch (problemType) {

        case 1: 
            printf("\nClassification Algorithms:\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algorithmChoice);

            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Model: Logistic Regression\n");
                    break;
                case 2:
                    printf("\nSelected Model: Decision Tree\n");
                    break;
                case 3:
                    printf("\nSelected Model: KNN\n");
                    break;
                default:
                    printf("\nInvalid algorithm choice for Classification.\n");
            }
            break; 

        case 2: 
            printf("\nRegression Algorithms:\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algorithmChoice);

            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Model: Linear Regression\n");
                    break;
                case 2:
                    printf("\nSelected Model: Polynomial Regression\n");
                    break;
                case 3:
                    printf("\nSelected Model: SVR\n");
                    break;
                default:
                    printf("\nInvalid algorithm choice for Regression.\n");
            }
            break; 

        case 3: 
            printf("\nClustering Algorithms:\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algorithmChoice);

            
            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Model: K-Means\n");
                    break;
                case 2:
                    printf("\nSelected Model: Hierarchical Clustering\n");
                    break;
                case 3:
                    printf("\nSelected Model: DBSCAN\n");
                    break;
                default:
                    printf("\nInvalid algorithm choice for Clustering.\n");
            }
            break; 

        case 4: 
            printf("\nComputer Vision Algorithms:\n");
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algorithmChoice);

        
            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Model: CNN\n");
                    break;
                case 2:
                    printf("\nSelected Model: YOLO\n");
                    break;
                case 3:
                    printf("\nSelected Model: R-CNN\n");
                    break;
                default:
                    printf("\nInvalid algorithm choice for Computer Vision.\n");
            }
            break; 

        default:
            printf("\nInvalid problem type selected.\n");
    }

    return 0;
}