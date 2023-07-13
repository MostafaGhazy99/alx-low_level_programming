/**
 * _memcpy - copies memory area from source to destination
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area @dest
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
char *d = dest;
const char *s = src;
unsigned int i;

for (i = 0; i < n; i++)
d[i] = s[i];
return (dest);
}
