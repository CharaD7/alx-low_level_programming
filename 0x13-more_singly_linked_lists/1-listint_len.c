#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list `listint_t`.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		elements++;
	}
	return (elements);
}
