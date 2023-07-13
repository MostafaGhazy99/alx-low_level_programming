/**
 * _isalpha - checks if a character is an alphabet character
 * @c: the character to be checked
 *
 * Return: 1 if @c is an alphabet character, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
