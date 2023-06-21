#include "main.h"
/**
 * main - Determine if anumber is positive, negative or zero.
(* 0 : is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
