int atoi(const char *s)
{
int result = 0;
int sign = 1;
int i = 0;

/* Handle leading whitespace */
while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r')
{
i++;
}
/* Handle sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
/* Convert digits to integer */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return result * sign;
}
