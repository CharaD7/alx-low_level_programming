#include "main.h"
#include <stdlib.h>

/**
 * strtow - Function that splits string into words
 *
 * @str: the string to be splitted
 *
 * Return: array of words
 **/

char **strtow(char *str)
{
	char **newarray;
	int i, j, k, size, wordlen, index;

	index = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	size = strsize(str);
	if (size == 0)
		return (NULL);
	newarray = malloc((size + 1) * sizeof(char *));
	if (newarray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		while (str[index] == ' ' && str[index])
			index++;
		wordlen = length_of_letters(str, index);
		newarray[i] = malloc((wordlen + 1) * sizeof(char));
		if (newarray[i] == NULL)
		{
			for (j = 0 ; j <= i; j++)
			free(newarray[j]);
			free(newarray);
			return (NULL);
		}
		for (k = 0; k < wordlen; k++)
		{
			newarray[i][k] = str[index];
			index++;
		}
		newarray[i][k] = '\0';
	}
	newarray[i] = NULL;
	return (newarray);
}
/**
 * length_of_letters -  find the length of a single word
 * @s: the given string
 * @index: the start index of the word
 *
 * Return: the length of a word
 **/
int length_of_letters(char *s, int index)
{
	int wordlen;

	wordlen = 0;
	while (s[index] && s[index] != '\0' && s[index] != ' ')
	{
		wordlen++;
		index++;
	}
	return (wordlen);
}
/**
 * strsize - function this is used to find a size of a string
 * @s: the given string
 *
 * Return: the size of the string
 **/
int strsize(char *s)
{
	int size = 0;
	int index = 0;

	while (s[index])
	{
		if (s[index] != '\0' && s[index] != ' ')
		{
			size++;
			index += length_of_letters(s, index);
		}
		else
		{
			index++;
		}
	}
	return (size);
}
