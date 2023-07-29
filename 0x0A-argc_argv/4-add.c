#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: 0 if successful, 1 if error
 */

int is_positive_number(const char *str) 
{
if (str == NULL || *str == '\0') 
{
return (0);
}
for (int i = 0; str[i] != '\0'; i++) 
{
if (!isdigit(str[i]) && str[i] != '-') 
{
return (0);
}
}
return (1);
}

int main(int argc, char *argv[])
{
int i, num, sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
