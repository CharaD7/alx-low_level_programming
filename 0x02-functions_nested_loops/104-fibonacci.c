#include <stdio.h>

/**
 * main - Prints fibonacci numder to 98
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i, j;

	for (i = 1; i <= 98; i++)
	{
		printf("%d ,", a);
		j = b + a;
		a = b;
		b = j;
	}
	printf("\n");
	return (0);
	
}
