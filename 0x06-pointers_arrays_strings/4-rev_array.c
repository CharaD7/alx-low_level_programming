#include "main.h"

/**
 * reverse_array - Reverse an array
 *
 * @a: Array pointer
 *
 * @n: Length of array to use
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, i, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{

		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
