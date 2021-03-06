#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string pointed to by c
 *
 * @dest: Pointer destination
 *
 * @src: Pointer to source
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
