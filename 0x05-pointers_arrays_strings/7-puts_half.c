#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
int length = 0;
int i, start;

while (str[length] != '\0')
length++;
start = length / 2;
if (length % 2 != 0)
start++;

for (i = start; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n');
}
