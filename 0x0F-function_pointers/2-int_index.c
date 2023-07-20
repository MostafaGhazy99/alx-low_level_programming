#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the cmp function
 * does not return 0. If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i; /* Move the variable declaration here */
    if (array && cmp && size > 0)
    {
        for (i = 0; i < size; i++) /* Use the variable 'i' in the initialization */
        {
            if (cmp(array[i]))
            {
                return i;
            }
        }
    }
    return -1;
}

