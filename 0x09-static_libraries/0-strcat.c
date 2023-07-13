/**
 * _strcat - concatenates two strings
 * @dest: the destination string to be concatenated
 * @src: the source string to be appended
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

/* Move the pointer to the end of dest string */
while (*ptr != '\0')
ptr++;
/* Append each character from src to dest */
while (*src != '\0') {
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0'; /* Add the null terminator */
return (dest);
}
