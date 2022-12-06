#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to beginning node
 *
 * Return: pointer to head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *temp, *prev = NULL;

	current = *head;

	if (current == NULL)
		return (NULL);
	if (current->next == NULL)
		return (*head);
	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	*head = prev;
	return (*head);
}
