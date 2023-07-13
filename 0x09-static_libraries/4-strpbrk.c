#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the first occurrence of any byte in @accept in @s,
 *         or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0') {
char *ptr = accept;
while (*ptr != '\0') {
if (*s == *ptr)
return (s);
ptr++;
}
s++;
}
return (NULL);
}
