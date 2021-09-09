#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 *
 * @dest: Destination pointer
 *
 * @src: Source pointer
 *
 * Return: dest's result
 */

char *_strncat(char *dest, char *src, int n)
{

	int len_of_dest, i;

	for (len_of_dest = 0; dest[len_of_dest] != '\0'; len_of_dest++)
	{
		;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_of_dest + i] = src[i];
	}


	dest[len_of_dest + i] = '\0';

	return (dest);
}
