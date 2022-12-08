#include "lists.h"

/**
 * insert_dnodeint_at_index - returns the nth node of a doubly linked list
 * @h: pointer to pointer to head of list
 * @idx: index of node in linked list
 * @n: integer data of node at idx
 *
 * Return: address of new node, NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		while (temp != NULL && i < idx - 1)
		{
			i++;
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		if (idx == 0)
		{
			new->next = *h;
			new->n = n;
			new->prev = NULL;
			*h = new;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		if (i + 1 == idx)
		{
			new->n = n;
			new->next = temp->next;
			new->prev = temp->prev;
			temp->next = new;
			return (new);
		}
	}
	return (NULL);
}
