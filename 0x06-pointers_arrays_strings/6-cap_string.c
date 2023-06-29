#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
int i;

/* Capitalize first character if it's a lowercase letter */
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;

/* Loop through the string */
for (i = 1; str[i] != '\0'; i++)
{
/* Check for separators */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
/* Capitalize next character if it's a lowercase letter */
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
}

return (str);
}
