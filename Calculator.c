#include <stdio.h>
float calculate(float num1, float num2, int choice) {
    switch(choice) {
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            if (num2 != 0)
                return num1 / num2;
            else {
                printf("Division by zero is not possible\n");
                return 0;
            }
        default:
            printf("Invalid choice\n");
            return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("\nMENU DRIVEN CALCULATOR\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        result = calculate(num1, num2, choice);

        if (choice >= 1 && choice <= 4)
            printf("Result = %.2f\n", result);
    }

    return 0;
}