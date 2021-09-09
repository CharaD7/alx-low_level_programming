#include "main.h"

/**
 * *cap_string - Capitalize each word
 *
 * @s: Pointer to use
 *
 * Return: Capitalzied string
 */

char *cap_string(char *s)
{

	char special[] = ",\t;\n; .!?\"(){}";
	int b, i, ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;

		if (i == 0)
		{
			b = 1;
		}
		else
		{
			for (ii = 0; special[ii] != '\0'; ii++)
			{
				if (s[i - 1] == special[ii])
				{
					b = 1;
					break;
				}
			}
		}

		if (b == 1)
		{
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] -= ('a' - 'A');
			}
		}
	}

	return (s);
}
