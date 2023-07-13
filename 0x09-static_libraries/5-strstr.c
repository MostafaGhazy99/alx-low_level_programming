#include <stddef.h>

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0') {
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n) {
h++;
n++;
}

if (*n == '\0')
return (haystack);

 haystack++;
}
return (NULL);
}
