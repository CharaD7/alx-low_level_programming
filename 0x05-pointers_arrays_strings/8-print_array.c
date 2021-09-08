#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers, followed by a new line
 *
 * @a: Pointer to use for a
 *
 * @n: Parameter
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--)
	{
		printf("%d", a[n]);

		if (n > 0)
		{
			printf(", ");
		}
	}

	printf("\n");
}
