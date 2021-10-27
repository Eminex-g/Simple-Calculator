#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num1, num2;
    int sum, product, diff, mod, quot;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Num1 = %d\n", num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Num2 = %d\n", num2);

    printf("\nPerforming calculations: \n");
    sum = num1 + num2;
    printf("Sum = %d\n", sum);

    product = num1 * num2;
    printf("Product = %d\n", product);

    diff = num1 - num2;
    printf("Difference = %d\n", diff);

    quot = num1 / num2;
    printf("Quotient = %d", quot);

    mod = num1 % num2;
    printf("\nModulus = %d", mod);
    return 0;
}
