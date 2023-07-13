/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer value
 */
int _atoi(char *s)
{
int sign = 1; /* positive by default */
int result = 0;
int i = 0;

/* Handle leading whitespace */
while (s[i] == ' ')
i++;
/* Handle sign */
if (s[i] == '-' || s[i] == '+') {
if (s[i] == '-')
sign *= -1;
i++;
}

/* Convert string to integer */
while (s[i] != '\0') {
if (s[i] < '0' || s[i] > '9')
break;

result = (result * 10) + (s[i] - '0');
i++;
}

return (sign * result);
}
