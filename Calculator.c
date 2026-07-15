#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    while (1) {
        printf("\nEnter first number: ");
        scanf("%d", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (operator) {
            case '+':
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
            }
        char choice;
        printf("\nDo you want to perform another calculation? (y/n): "); 
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }
    return 0;
}