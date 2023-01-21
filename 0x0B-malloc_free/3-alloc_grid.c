#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
			if (arr[i] == NULL)
			{
				for (i--; i >= 0; i--)
				{
					free(arr[i]);
				}
				free(arr);
				return (NULL);
			}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
