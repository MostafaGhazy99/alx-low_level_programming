/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer less than, equal to, or greater than 0 if s1 is less than,
 *         equal to, or greater than s2, respectively
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0') {
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}

return (*s1 - *s2);
}
