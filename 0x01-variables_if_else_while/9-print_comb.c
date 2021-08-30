#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers
 * Return: (0)
 */
int main(void)
{
int c = 0;

for (c = 0; c <= 9; c++)
{
	putchar(c + ',\ ');
}

putchar('\n');
return (0);
}
