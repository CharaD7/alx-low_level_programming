#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: check number
 *
 * Return: -1, 0, or 1
 */

int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}

	else
	{
		a = -1;
		_putchar('-1');
	}

	return (a);

}
