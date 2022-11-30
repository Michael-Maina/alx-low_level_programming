#include "lists.h"

/**
 * list_len - number of elements in a list_t linked list
 * @h: linked list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
