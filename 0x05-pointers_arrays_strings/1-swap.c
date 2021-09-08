#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the values of two integers
 *
 * @a: First integer value's parameter
 *
 * @b: Second integer value's parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
