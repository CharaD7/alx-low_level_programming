#include "main.h"

/**
 * _strcat - Concatenates two strings using pointers
 *
 * @dest: Pointer to destination variable
 *
 * @src: Pointer to source variable
 *
 * Return: Destination value (dest)
 */

char *_strcat(cahr *dest, char *src)
{
	int a = -1, b;

	for(b = 0; dest[b] != '\0'; b++)
	{
		;
	}

	do {
		a++;
		dest[b] = src[a];
		b++;
	} while (src[a] != '\0');

	return (dest);
}
