#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to beginning of linked list
 * @idx: index of list where new node is to be inserted, starts at 0
 * @n: data to be stored at new node
 * Return: address of new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	prev = malloc(sizeof(listint_t));

	if (prev == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = prev;
		return (*head);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			if (idx == 0)
			{
				prev->next = *head;
				*head = prev;
				return (prev);
			}
			if (i == idx)
			{
				prev->next = temp->next;
				prev->n = n;
				temp->next = prev;
				break;
			}
			i++;
			temp = temp->next;
		}
		return (prev);
	}
}
