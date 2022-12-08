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

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	        return (new);
	}
	else
	{
		if (temp->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new != NULL)
			{
				new->n = n;
				new->next = temp->next;
				new->prev = temp->prev;
				temp->next = new;
				return (new);
			}
			else
				return (NULL);
		}
	}
}
