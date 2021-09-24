#include "main.h"

/**
 * string_nconcat - Concatenate two strings
 *
 * @s1: First string to use
 *
 * @s2: Second string to use
 *
 * @n: Checker of the length of s2
 *
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	unsigned int s1_size, s2_size, s1_count, s2_count;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_size = 0; s1[s1_size] != '\0'; s1_size++)
		;

	for (s2_size = 0; s2[s2_size] != '\0'; s2_size++)
		;

	if (n < s2_size)
		s2_size = n;

	s1s2 = malloc(sizeof(char) * (s1_size + n + 1));

	if (s1s2 == NULL)
		return (NULL);

	for (s1_count = 0; s1_count < s1_size; s1_count++)
		s1s2[s1_count] = s1[s1_count];

	for (s2_count = 0; s2_count < s2_size; s2_count++, s1_count++)
		s1s2[s1_count] = s2[s2_count];

	s1s2[s1_count] = '\0';

	return (s1s2);
}
