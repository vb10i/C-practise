#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    char op;
    printf("operator: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        if (b != 0)
            printf("%d", a / b);
        else
            printf("Error! Division by zero.");
        break;
    default:
        printf("error!");
    }
    return 0;
}
