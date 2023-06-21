#include "main.h"
/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: integer to check
 */
void positive_or_negative(int i)
{
    if (i == 0)
        printf("0 is zero\n");
    else if (i > 0)
        printf("%d is positive\n", i);
    else
        printf("%d is negative\n", i);
}

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
    int i;

    i = 0;
    positive_or_negative(i);

    return (0);
}
