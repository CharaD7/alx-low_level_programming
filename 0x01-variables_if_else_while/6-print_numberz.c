#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Desccription: Print 0 to 9, each on a new line
 * Return: (0)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
	putchar(48 + n); /*48 is the ASCII for 0, which will make characters integers*/
}

putchar('\n');
return (0);
}
