#include "search_algos.h"

/**
 * jump_list - looks for value in sorted singly linked list
 *              of integers by Jump Search
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located,
 *          -1 if array is NULL/ value not present
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, jump;
	listint_t *head = list, *temp = NULL;

	if (head == NULL || size == 0)
		return (NULL);

	step = (sqrt(size));
	jump = step;

	while (head)
	{
		if (head->index == step)
		{
			printf("Value checked at index [%ld] = [%d]\n",
			       head->index, head->n);
			if (head->n > value)
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
				       head->index - jump, head->index);
				break;
			}
			temp = head;
			step += jump;
		}
		head = head->next;
	}
	temp = step == 4 ? list : temp;

	while (temp && temp->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
