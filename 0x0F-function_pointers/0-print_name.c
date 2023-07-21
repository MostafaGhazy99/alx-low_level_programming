#include <stdio.h>

/**
 * print_name - Calls the provided function with the given name.
 * @name: The name to be passed to the function.
 * @f: A pointer to the function that takes a char* as a parameter and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
else
{
printf("Error: Invalid input!\n");
}
}
