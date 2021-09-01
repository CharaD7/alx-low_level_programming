#include <stdio.h>

/**
 * main - Last Fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, step = 0;

	while (i < 98)
	{
		step = a + b;
		a = b;
		b = step;
		printf("%lu", step);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
