#include "main.h"
#include <stdio.h>

/**
 * check_prime - Check all numbers less than n if they can divide it
 *
 * @n: int
 *
 * @o: int
 *
 * Return: int
 */

int check_prime(int n, int o)
{

	if (o >= n && n > 1)
	{
		return (1);
	}

	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}

	else
	{
		return (check_prime(n, o + 1));
	}

}

/**
 * is_prime_number - Verify if n is a prime number
 *
 * @n: int
 *
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
