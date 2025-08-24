#include <stdio.h>

int main() {
    int choice, quantity;
    double price = 0.0, total = 0.0;
    char member;

    printf("=== Welcome to MelikeK Restaurant ===\n");
    printf("Menu:\n");
    printf("1. Burger (350 TL)\n");
    printf("2. Pizza (360 TL)\n");
    printf("3. Coffee (200 TL)\n");
    printf("4. Exit\n");

    printf("Select an item (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            price = 350.0;
            printf("You selected Burger.\n");
            break;
        case 2:
            price = 360.0;
            printf("You selected Pizza.\n");
            break;
        case 3:
            price = 200.0;
            printf("You selected Coffee.\n");
            break;
        case 4:
            printf("Thank you for visiting! Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice! Please restart the program.\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity! Please restart the program.\n");
        return 0;
    }
