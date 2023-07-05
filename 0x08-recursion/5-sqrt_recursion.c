#include "main.h"

/**
 * sqrt_check - Checks for the square root of n
 * @n: The number to find the square root for
 * @guess: The current guess for the square root
 *
 * Return: The square root if found, -1 otherwise
 */
int sqrt_check(int n, int guess)
{
if (guess * guess == n)
return (guess);
else if (guess * guess > n)
return (-1);
else
return (sqrt_check(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root for
 *
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_check(n, 0));
}
