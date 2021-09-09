#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: Integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int a = 1, i, b;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; n / a > 9; i++, a *= 10)
	;

	for (; a >= 1; n %= a, a /= 10)
	{
		b = n / a;
		_putchar('0' + b);

	}

}
