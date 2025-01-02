#include <stdio.h>

int main() {
    printf("Welcome to the Weight Conversion Program!\n");
    printf("Select the weight unit to convert from:\n");
    printf("1. Kilograms\n");
    printf("2. Pounds\n");

    int choice;
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("Invalid choice. Please select 1 or 2.\n");
    } else {
        float weight;
        printf("Enter the weight value: ");
        if (scanf("%f", &weight) != 1) {
            printf("Invalid input. Please enter a numeric value.\n");
        } else {
            if (choice == 1) {
                float converted_weight = weight * 2.20462; // Kilograms to Pounds
                printf("%.2f kilograms is equal to %.2f pounds.\n", weight, converted_weight);
            } else if (choice == 2) {
                float converted_weight = weight / 2.20462; // Pounds to Kilograms
                printf("%.2f pounds is equal to %.2f kilograms.\n", weight, converted_weight);
            }
        }
    }

    return 0;
}

