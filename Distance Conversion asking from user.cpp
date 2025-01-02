#include <stdio.h>

int main() {
    printf("Welcome to the Distance Conversion Program!\n");
    printf("Select the distance unit to convert from:\n");
    printf("1. Kilometers\n");
    printf("2. Miles\n");

    int choice;
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("Invalid choice. Please select 1 or 2.\n");
    } else {
        float distance;
        printf("Enter the distance value: ");
        if (scanf("%f", &distance) != 1) {
            printf("Invalid input. Please enter a numeric value.\n");
        } else {
            if (choice == 1) {
                float converted_distance = distance * 0.621371; // Kilometers to Miles
                printf("%.2f kilometers is equal to %.2f miles.\n", distance, converted_distance);
            } else if (choice == 2) {
                float converted_distance = distance / 0.621371; // Miles to Kilometers
                printf("%.2f miles is equal to %.2f kilometers.\n", distance, converted_distance);
            }
        }
    }

    return 0;
}

