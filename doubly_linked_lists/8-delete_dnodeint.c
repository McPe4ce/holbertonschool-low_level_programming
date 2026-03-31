
#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Function that deletes a node at index
 * @head: Pointer to the pointer of the list
 * @index: Where the node will be deleted
 * Return: 1 (Successfully freed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current && counter < index)
	{
		current = current->next;
		counter++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
