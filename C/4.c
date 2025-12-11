#include <stdio.h>

int main()
{
    // int e = 11;
    // (e % 2 == 0) ? printf("Even") : printf("Odd");

    // int a = 50, b = 20, c = 30;

    // int d = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    // printf("\n%d", d);

    int a, b;
    char op;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter first value: ");
    scanf("%d", &b);

    printf("Enter operator +,-,*,/: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Sum of a + b: %d", a + b);
        break;
    case '-':
        printf("Sub. of a - b: %d", a - b);
        break;
    case '*':
        printf("Mul. of a * b: %d", a * b);
        break;
    case '/':
        printf("Div. of a / b: %d", a / b);
        break;
    }
}