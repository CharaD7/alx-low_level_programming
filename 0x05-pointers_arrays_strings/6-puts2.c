#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print every character of a string starting from the first
 *
 * @str: Pointer to use
 *
 * Return: (0)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
