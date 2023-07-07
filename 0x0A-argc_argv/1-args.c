#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv; /* Prevent unused variable warning */

putchar(argc - 1 + '0');
putchar('\n');
return (0);
}
