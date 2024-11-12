#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    printf("%6f + %6f = %.2f\n", num1, num2, num1 + num2);
    printf("%6f - %6f = %.2f\n", num1, num2, num1 - num2);
    printf("%6f * %6f = %.2f\n", num1, num2, num1 * num2);
    printf("%6f / %6f = %.2f\n", num1, num2, num1 / num2);
    return 0;
}

