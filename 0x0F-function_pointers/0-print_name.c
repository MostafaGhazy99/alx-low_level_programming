#include <stdio.h>
/**
 * print_name - prints a name using a given function
 * @name: name of the person
 * @f: pointer to a function that prints the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}