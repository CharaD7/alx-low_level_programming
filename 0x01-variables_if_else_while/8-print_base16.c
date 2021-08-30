#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{

int c;
char i = 'a';

for (c = 0; c < 10; c++)
{
	putchar(c);

	while(i <= 'f')
	{
		putchar(i);
	}
}

putchar('\n');
return (0);
}
