/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate length of
 *
 * Return: the length of the string @s
 */
unsigned int _strlen(char *s)
{
unsigned int length = 0;

while (*s != '\0') {
length++;
s++;
}

return (length);
}
