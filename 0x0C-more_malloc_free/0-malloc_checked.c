#include "main.h"

/**
 * malloc_checked - Allocates memory
 *
 * @b: Unsigned int argument that would hold the parameter
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *i = malloc(b); /* Allocating memory to pointer */

	if (i == 0)
	{
		exit(98);
	}

	return (i);
}
