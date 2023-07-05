#include "main.h"

/**
 * is_prime_recursive - Recursive helpr function to check f a num is prime.
 * @n: The number to check.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
/* Base cases */
if (n < 2) /* Numbers less than 2 are not prime */
return (0);
if (n == 2) /* 2 is a prime number */
return (1);
if (n % divisor == 0) /* Number is divisible by divisor, not prime */
return (0);
if (divisor * divisor > n) /* Divisor exceeds the square root of n, prime */
return (1);
return (is_prime_recursive(n, divisor + 1));
/* Recursive call with incremented divisor */
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2)); /* Start recursion with divisor 2 */
}
