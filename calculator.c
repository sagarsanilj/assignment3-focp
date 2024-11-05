#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n*** Simple Calculator ***\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Logarithmic value (log base 10)\n");
    printf("6. Square root (√)\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
           
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        } else if (choice == 5 || choice == 6) {
          
            printf("Enter a number: ");
            scanf("%lf", &num1);
        } else {
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }
        if (choice == 1) {
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        } else if (choice == 2) {
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        } else if (choice == 3) {
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        } else if (choice == 4) {
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } else if (choice == 5) {
            if (num1 > 0) {
                result = log10(num1);
                printf("Result: log10(%.2lf) = %.2lf\n", num1, result);
            } else {
                printf("Error: Logarithmic values are only defined for positive numbers.\n");
            }
        } else if (choice == 6) {
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Result: √%.2lf = %.2lf\n", num1, result);
            } else {
                printf("Error: Square root of a negative number is not defined in real numbers.\n");
            }
        } else {
            printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
