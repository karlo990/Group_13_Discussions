/* calc1.c - simple calculator using switch-case (SCS 1101) */
#include <stdio.h>

int main(void)
{
    char op;            /* the operator the user types: + - * / %  */
    double a, b;        /* the two numbers                          */

    printf("Enter an expression (e.g. 12 * 4): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
        case 'x':                       /* two cases share one action */
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0)
                printf("Error: division by zero is not allowed.\n");
            else
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        case '%':
            if ((int)b == 0)
                printf("Error: modulus by zero is not allowed.\n");
            else
                printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
            break;
        default:
            printf("Error: '%c' is not a valid operator.\n", op);
    }
    return 0;
}
