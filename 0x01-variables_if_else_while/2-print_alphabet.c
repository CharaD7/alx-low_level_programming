#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print alphabets in lowercase, followed by a new line
 * Return: Always (0) - success
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
