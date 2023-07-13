/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: pointer to the filled memory area @s
 */
void *_memset(void *s, int b, unsigned int n)
{
unsigned char *ptr = s;
unsigned char value = b;
unsigned int i;
for (i = 0; i < n; i++)
ptr[i] = value;
return (s);
}
