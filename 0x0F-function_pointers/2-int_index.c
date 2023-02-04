#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 or index if found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				return (i);
		}
	}
	return (-1);
}
