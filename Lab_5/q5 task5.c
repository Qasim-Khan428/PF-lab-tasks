
#include <stdio.h>

int main()
{
    float confidence;
    char userType;
    

    printf("Enter face recognition confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter user type (A = Authorized, U = Unauthorized): ");
    scanf(" %c", &userType);

    int isAuthorized = (userType == 'A' || userType == 'a') ? 1 : 0;

 if (confidence < 50 || !isAuthorized) {
    printf("Result: ACCESS DENIED\n");
    }
    
else if (confidence >= 80 && isAuthorized ) {  
    printf("Result: FACE RECOGNIZED\n");
    printf("Result: ACCESS GRANTED\n");
}
else if(confidence >=80)
{
 printf("Face Recognized");   
}
else
printf("MANUAL VERIFICATION\n");

printf("User Type: %s\n", isAuthorized ? "Authorized" : "Unauthorized");

return 0;
}