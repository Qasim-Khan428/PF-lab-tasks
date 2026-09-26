#include <stdio.h>
int main()
{
    int category, Animal_subcategory,Vehicle_subcategory,Food_subcategory,Human_subcategory;
    printf("-----------IMAGE CLASSIFICATION SYSTEM-----------\n");
    printf("Enter category (1 for Animal, 2 for Vehicle, 3 for Food, 4 for Human): \n");
    scanf("%d", &category);
    switch (category)
    {
    case 1:
    {
        printf("enter subcategory(1:cat,2:dog,3:bird): \n");
        scanf("%d", &Animal_subcategory);
        switch (Animal_subcategory)
        {
        case 1:
            printf("You selected Cat\n");
            break;
        case 2:
            printf("You selected Dog\n");
            break;
        case 3:
            printf("You selected Bird\n");
            break;
        default:
            printf("Invalid subcategory\n");
        }
    }
    break;
    case 2:
    {
        printf("enter subcategory(1:car,2:bike,3:bus): \n");
        scanf("%d", &Vehicle_subcategory);
        switch (Vehicle_subcategory)
        {
        case 1:
            printf("You selected Car\n");
            break;
        case 2:
            printf("You selected Bike\n");
            break;
        case 3:
            printf("You selected Bus\n");
            break;
        default:
            printf("Invalid subcategory\n");
        }
    }
    break;
    case 3:
    {
        printf("enter subcategory(1:Pizza,2:Burger,3:Biryani): \n");
        scanf("%d", &Food_subcategory);
        switch (Food_subcategory)
        {
        case 1:
            printf("You selected Pizza\n");
            break;
        case 2:
            printf("You selected Burger\n");
            break;
        case 3:
            printf("You selected Biryani\n");
            break;
        default:
            printf("Invalid subcategory\n");
        }
    }
    break;
    case 4:
    {
        printf("enter subcategory(1:Male,2:Female,3:Child): \n");
        scanf("%d", &Human_subcategory);
        switch (Human_subcategory)
        {
        case 1:
            printf("You selected Male\n");
            break;
        case 2:
            printf("You selected Female\n");
            break;
        case 3:
            printf("You selected Child\n");
            break;
        default:
            printf("Invalid subcategory\n");
        }
    }
    break;
    default:
    printf("invalid input");
    }

    return 0;
}