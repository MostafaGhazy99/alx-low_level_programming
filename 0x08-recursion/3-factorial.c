#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of n.
 *         If n is lower than 0, returns -1 to indicate an error.
 */
int factorial(int n)
{
if (n < 0) /* Check for negative number */
return (-1);
if (n == 0) /* Base case: factorial of 0 is 1 */
return (1);
return (n * factorial(n - 1)); 
/* Recursive call with n-1 */
}
