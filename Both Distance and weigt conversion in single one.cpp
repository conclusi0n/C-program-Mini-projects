#include <stdio.h>

int main() {
    printf("Welcome to the Conversion Program!\n");
    printf("Select the conversion type:\n");
    printf("1. Weight Conversion\n");
    printf("2. Distance Conversion\n");

    int conversion_type;
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &conversion_type);

    if (conversion_type != 1 && conversion_type != 2) {
        printf("Invalid choice. Please select 1 or 2.\n");
    } else {
        if (conversion_type == 1) {
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
        } else if (conversion_type == 2) {
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
        }
    }

    return 0;
}

