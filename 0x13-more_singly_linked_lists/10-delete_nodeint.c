#include "lists.h"

/**
 * delete_nodeint_at_index - deleted node at index of linked list
 * @head: pointer to beginning of linked list
 * @index: position of node in linked list, starts at 0
 *
 * Return: 1 if successful, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete_node, *temp;
	unsigned int i = 0;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp)
		return (1);
	}
	else
	{
		temp = *head;

		while (temp !=NULL && i < (index - 1))
		{
			temp = temp->next;
			i++;
		}

		if (temp == NULL || (temp->next == NULL && i != 0))
			return (-1);

		delete_node = temp->next;
		temp->next = delete_node->next;
		free(delete_node);

		return (1);
	}

	return (-1);
}
