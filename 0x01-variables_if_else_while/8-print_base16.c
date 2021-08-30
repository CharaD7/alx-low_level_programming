#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{

int c = '0';
char i = 'a';

while (c <= '9')
{
	putchar(c);
	c++;
}

while(i <= 'f')
{
	putchar(i);
	i++;
}

putchar('\n');
return (0);
}
