#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Find the length of a string
 *
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

/**
 * *argstostr - Concatenate all the arguments
 *
 * @ac: int
 *
 * @av: arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, b = 0, j = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; i < ac; i++, b++)
	{
		b += _strlen(av[i]);
	}

	s = malloc(sizeof(char) * b + 1);

	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, a++)
		{
			s[a] = av[i][j];
		}

		s[a] = '\n';
		a++;
	}

	s[a] = '\0';

	return (s);
}
