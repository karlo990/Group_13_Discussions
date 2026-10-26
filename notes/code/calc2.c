/* calc2.c - menu-driven calculator: do-while loop + switch-case (SCS 1101) */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int choice;
    double a, b, result;

    do
    {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Add          2. Subtract\n");
        printf("3. Multiply     4. Divide\n");
        printf("5. Power (a^b)  6. Square root\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: case 2: case 3: case 4: case 5:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                switch (choice)                 /* nested switch */
                {
                    case 1: result = a + b; break;
                    case 2: result = a - b; break;
                    case 3: result = a * b; break;
                    case 4:
                        if (b == 0) { printf("Error: cannot divide by zero.\n"); continue; }
                        result = a / b;
                        break;
                    case 5: result = pow(a, b); break;
                }
                printf("Result = %.4f\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a < 0)
                    printf("Error: no real square root of a negative number.\n");
                else
                    printf("Result = %.4f\n", sqrt(a));
                break;
            case 0:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice. Try 0 to 6.\n");
        }
    } while (choice != 0);

    return 0;
}
