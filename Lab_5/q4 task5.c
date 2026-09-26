#include <stdio.h>
int main()
{
    int conversation, chat;
    printf("==========AI CHATBOT==========\n");
    printf("select a conversation category\n1. Greeting\n2. Study\n3. Weather\n4. Help.\n");
    scanf("%d", &conversation);
    switch (conversation)
    {
    case 1:
    {
        printf("Select a chat\n1.Greeting\n2. Study\n3. Weather\n4. Help");
        scanf("%d", &chat);
        switch (chat)
        {
        case 1:
            printf("Hi I am chat bot");
            break;
        case 2:
            printf("I am good,thanks for asking");
            break;
        case 3:
            printf("Goodbye.It was nice talking to you");
            break;
        default:
            printf("invalid input");
        }
    }
    break;
    case 2:
    {
        printf("Select a chat\n1. Programming\n2. Mathematics\n3. AI\n");
        scanf("%d", &chat);
        switch (chat)
        {
        case 1:
            printf("start learning programming with C language");
            break;
        case 2:
            printf("Practice MATH problems daily");
            break;
        case 3:
            printf("Learn to give accurate prompt for assignments");
        default:
            printf("invalid input");
            break;
        }
        break;
    }
    break;
    case 3:
    {
        printf("Select a chat\n1. Today\n2. Tomorrow\n3. Forecast\n");
        scanf("%d", &chat);
        switch (chat)
        {
        case 1:
            printf("Partially cloudy outside ");
            break;
        case 2:
            printf("very Windy and cloudy");
            break;
        case 3:
            printf("80 percent chance of rain");
            break;

        default:
            printf("invalid input");
            break;
        }
    }
    break;
    case 4:
    {
        printf("Select a chat\n1. About chatbot\n2. Commands\n3. exit\n");
        scanf("%d", &chat);
        switch (chat)
        {
        case 1:
            printf("created by a student as a part of task");
            break;
        case 2:
            printf("select from predefined categories (1,2,3,4)");
            break;
        case 3:
            printf("exiting help");
            break;

        default:
            printf("invalid input");
            break;
        }
    }
    break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}