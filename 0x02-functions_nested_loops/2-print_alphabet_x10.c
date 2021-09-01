#include "main.h"

/**
 * print_alphabet - print alphabets 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}

}
