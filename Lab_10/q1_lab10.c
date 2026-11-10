#include <stdio.h>
#include <string.h>

int main(void) {
    char feedback[200];
    char result[300];
    char *pos;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    feedback[strcspn(feedback, "\n")] = '\0';   


    printf("Total characters: %zu\n", strlen(feedback));

 
    if (strstr(feedback, "good") != NULL)
        printf("Sentiment: Positive keyword 'good' found.\n");
    if (strstr(feedback, "bad") != NULL)
        printf("Sentiment: Negative keyword 'bad' found.\n");
    if (strstr(feedback, "good") == NULL && strstr(feedback, "bad") == NULL)
        printf("Sentiment: Neutral (no keyword found).\n");

    pos = strstr(feedback, "bad");
    if (pos != NULL) {
        result[0] = '\0';
        strncat(result, feedback, pos - feedback);  
        strcat(result, "not good");                 
        strcat(result, pos + 3);                 
        strcpy(feedback, result);                   

        printf("Updated review: %s\n", feedback);
    }

    return 0;
}