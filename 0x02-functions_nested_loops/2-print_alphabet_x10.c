#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

}
