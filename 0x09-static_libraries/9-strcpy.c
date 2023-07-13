/**
 * _strcpy - copies a string, including the null byte
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src != '\0') {
*ptr = *src;
ptr++;
src++;
}

*ptr = '\0'; /* Add the null terminator */

return (dest);
}
