#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 *
 * @s: Pointer to use
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len, a, split;
	char b;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}

	a = 0;

	split = len / 2;

	while (split--)
	{
		b = s[len -a - 1];
		s[len -a - 1] = s[a];
		s[a] = b;
		a++;
	}
}
