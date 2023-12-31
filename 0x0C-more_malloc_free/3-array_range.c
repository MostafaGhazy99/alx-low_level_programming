#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: The minimum value of the array (included)
 * @max: The maximum value of the array (included)
 *
 * Return: A pointer to the newly created array
 *         NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
int *arr, i, size;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
