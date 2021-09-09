#include "main.h"

/**
 * string_toupper - Capitalize a string
 *
 * @s: Pointer to use
 *
 * Return: Capitalized string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
