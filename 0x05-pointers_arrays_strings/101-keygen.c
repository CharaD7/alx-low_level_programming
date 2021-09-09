#include <stdio.h>
#include <time.h>

/**
 * main - Generate random passwords
 *
 * Return: (0)
 */

int main(void)
{
	int password, total_characters;

	total_characters = 0;

	srand(time(NULL));
	total_characters = 0;

	while (total_characters < 2646)
	{
		password = (rand() % 128);
		total_characters += password;

		printf("%c", password);
	}

	printf("%c", 2772 - total_characters);

	return (0);
}
