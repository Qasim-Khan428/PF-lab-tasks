#include <stdio.h>
int main() {
    int score;
    printf("Enter confidence score (0-100): ");
    scanf("%d",&score);
    if(score >=0 && score <50)
    printf("Low confidence\n");
    else if(score >=50 && score <80)
    printf("moderate confidence\n");
    else if(score >=80 && score <=100)
    printf("High confidence\n");
    else
    printf("Invalid score\n");
    return 0;
}