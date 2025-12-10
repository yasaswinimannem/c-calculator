// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0)
        return -1;

    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main() {
    int choice;
    double a, b;

    while (1) {
        printf("\n==== CALCULATOR WITH 23 OPERATIONS ====\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
        printf("6. Power\n7. Square Root\n8. Cube Root\n9. Square\n10. Cube\n");
        printf("11. Absolute Value\n12. Sine\n13. Cosine\n14. Tangent\n");
        printf("15. Log10\n16. Natural Log (ln)\n17. Exponential (e^x)\n18. Factorial\n");
        printf("19. Maximum\n20. Minimum\n21. Percentage\n22. Reciprocal\n23. Floor & Ceil\n");
        printf("0. Exit\n");

        printf("Enter operation number: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        switch (choice) {

            case 1:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a + b);
                break;

            case 2:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a - b);
                break;

            case 3:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a * b);
                break;

            case 4:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result = %.2lf\n", a / b);
                break;

            case 5:
                printf("Enter integers a and b: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %d\n", (int)a % (int)b);
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", pow(a, b));
                break;

            case 7:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", sqrt(a));
                break;

            case 8:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", cbrt(a));
                break;

            case 9:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", a * a);
                break;

            case 10:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", a * a * a);
                break;

            case 11:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", fabs(a));
                break;

            case 12:
                printf("Enter angle (radians): ");
                scanf("%lf", &a);
                printf("sin(a) = %.4lf\n", sin(a));
                break;

            case 13:
                printf("Enter angle (radians): ");
                scanf("%lf", &a);
                printf("cos(a) = %.4lf\n", cos(a));
                break;

            case 14:
                printf("Enter angle (radians): ");
                scanf("%lf", &a);
                printf("tan(a) = %.4lf\n", tan(a));
                break;

            case 15:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("log10(a) = %.4lf\n", log10(a));
                break;

            case 16:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("ln(a) = %.4lf\n", log(a));
                break;

            case 17:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("e^a = %.4lf\n", exp(a));
                break;

            case 18: {
                int n;
                printf("Enter integer: ");
                scanf("%d", &n);

                long long f = factorial(n);
                if (f == -1)
                    printf("Error: Negative factorial not allowed\n");
                else
                    printf("Factorial = %lld\n", f);
                break;
            }

            case 19:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                printf("Max = %.2lf\n", (a > b) ? a : b);
                break;

            case 20:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                printf("Min = %.2lf\n", (a < b) ? a : b);
                break;

            case 21:
                printf("Enter total and percentage: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", (a * b) / 100.0);
                break;

            case 22:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a == 0)
                    printf("Error: Cannot divide by zero\n");
                else
                    printf("1/a = %.4lf\n", 1 / a);
                break;

            case 23:
                printf("Enter number: ");
                scanf("%lf", &a);
                printf("Floor = %.2lf, Ceil = %.2lf\n", floor(a), ceil(a));
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
