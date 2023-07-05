#include "main.h"

/**
 * sqrt_recursive - Recursive helper function to compute square root.
 * @n: The number to compute the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number.
 * If the number does not have a natural square root, returns -1.
 */
int sqrt_recursive(int n, int guess)
{
if (guess * guess == n) /* Base case: square root found */
return (guess);
if (guess * guess > n) /* Base case: square root does not exist */
return (-1);
return (sqrt_recursive(n, guess + 1)); /* Recursive call  incremented guess */
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of the number.
   If the number does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Check for negative number */
return (-1);
return (sqrt_recursive(n, 0)); /* Start recursion with initial guess 0 */
}
