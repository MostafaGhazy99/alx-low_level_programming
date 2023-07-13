/**
 * _strncat - concatenates two strings up to n characters
 * @dest: the destination string to be concatenated
 * @src: the source string to be appended
 * @n: maximum number of characters to be appended
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncat(char *dest, const char *src, int n)
{
char *ptr = dest;

/* Move the pointer to the end of dest string */
while (*ptr != '\0')
ptr++;

/* Append each character from src to dest, up to n characters */
while (*src != '\0' && n > 0) {
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0'; /* Add the null terminator */

return (dest);
}
