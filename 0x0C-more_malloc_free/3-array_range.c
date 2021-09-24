#include "main.h"

/**
 * *array_range -  Creates an array of integers
 *
 * @min: Size of the array
 *
 * @max: Char to initialize
 *
 * Return: Pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
	int *x;
	int y;

	if (min > max)
	{
		return (NULL);
	}

	x = malloc((max - min + 1) * sizeof(int));

	if (x == 0)
	{
		return (NULL);
	}

	for (y = 0; min + y <= max; y++)
	{
		x[y] = min + y;
	}

	return (x);
}

