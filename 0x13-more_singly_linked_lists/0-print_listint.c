#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%u\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
