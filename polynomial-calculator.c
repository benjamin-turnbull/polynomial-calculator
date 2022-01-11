/* solves 3x^5+2x^4-5x^3-x^2+7x-6 where x is defined by user input */

#include <stdio.h>

int main(void)
{
    int x, solution;

    printf("Polynomial: 3x^5+2x^4-5x^3-x^2+7x-6 \nEnter a value for x:\n");
    scanf("%d", &x);

    /* solution = (3.0 * x * x * x * x * x) + (2.0 * x * x * x * x) - (5.0 * x * x * x) - (x * x) + (7.0 * x) -6.0; */
    solution = ((((3.0 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; /* Horner's Method */

    printf("Solution: %d", solution);
}
