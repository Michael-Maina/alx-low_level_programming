#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of linked list
 * @head: pointer to beginning of linked list
 * @index: position of node in linked list, starts at 0
 *
 * Return: 1 if successful, -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 1;

	temp = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (counter < index)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		counter++;
	}

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
