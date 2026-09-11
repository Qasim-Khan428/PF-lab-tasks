#include <stdio.h>
int main() {
    int tr,mr,dr;
    printf("enter the total number of records:" );
    scanf("%d",&tr);
    printf("enter the number of missing records:" );
    scanf("%d",&mr);
    printf("enter the number of duplicate records:" );
    scanf("%d",&dr);
    if(tr<=0)
    printf("Invalid dataset\n");
    else if(mr>0.3*tr)
    printf("Poor quality Dataset\n");
    else if(mr<=0.3*tr && dr>0.2*tr)
    printf("Dataset requires cleaning\n");
    else
    printf("Dataset ready for training\n");
    return 0;
    
}