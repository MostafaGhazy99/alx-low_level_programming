/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the characters to search for
 *
 * Return: the length of the prefix substring consisting of characters in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s != '\0') {
match = 0;
while (*accept != '\0') {
if (*s == *accept) {
count++;
match = 1;
break;
}
accept++;
}
if (!match)
break;
s++;
accept = accept - count;
}

return (count);
}
