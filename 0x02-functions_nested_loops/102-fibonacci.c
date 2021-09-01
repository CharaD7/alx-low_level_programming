#include <stdio.h>

/**
 * main - Prints fibonacci numbers to 50
 *
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c, d;

	for (c = 0; c <= 47; c++)
	{
		printf("%d ,", a);
		d = a + b;
		a = b;
		b = d;
	}
	printf("\n");
	return (0);
}
