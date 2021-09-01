#include "main.h"

/**
 * print_alphabet - print alphabets 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

}
