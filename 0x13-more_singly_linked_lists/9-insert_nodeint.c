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

	if (*head == NULL && idx == '\0')
		return (NULL);

	prev = malloc(sizeof(listint_t));

	if (prev == NULL)
		return (NULL);

	if (idx == 0 || *head == NULL)
	{
		prev->n = n;
		prev->next = NULL;
		*head = prev;
		return (prev);
	}
	else
	{
		temp = *head;

		while (temp != NULL)
		{
			if (i == idx)
			{
				prev->next = temp->next;
				prev->n = n;
				temp->next = prev;
				return (prev);
			}
			i++;
			temp = temp->next;
		}
		return (NULL);
	}
}
