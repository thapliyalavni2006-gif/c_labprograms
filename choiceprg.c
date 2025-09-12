#include <stdio.h>
int main()
{
    int n1, n2, sum, diff, pr;
    int choice;
    printf("Enter first number");
    scanf("%d", &n1);
    printf("Enter second number");
    scanf("%d", &n2);
    printf("MENU:\n 1:Additon\n 2:Subtraction\n 3:Multiplication\n");
    printf("Enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        sum = n1 + n2;
        printf("%d", sum);
        break;
    case 2:
        diff = n1 - n2;
        printf("%d", diff);
        break;
    case 3:
        pr = n1 * n2;
        printf("%d", pr);
        break;

    default:
        printf("invalid choice");

        break;
    }

    return 0;
}
