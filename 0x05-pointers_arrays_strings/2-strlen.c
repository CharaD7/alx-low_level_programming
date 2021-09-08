#include "main.h"
#include <stdio.h>

/**
 * _strlen - Return the length of a string
 *
 * @s: Pointer to use
 *
 * Return: void
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}

	return (a);
}
