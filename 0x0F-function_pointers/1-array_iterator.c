#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i; // Move the variable declaration here
if (array && action)
{
for (i = 0; i < size; i++) // Use the variable 'i' in the initialization
{
action(array[i]);
}
}
}
