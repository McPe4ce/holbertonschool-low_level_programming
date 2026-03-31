#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Function that adds a node at the index
 * @h: Points to the pointer of the list
 * @n: Number stored
 * @idx: Index where the string should be stored
 * Return: new_node (new node)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int counter = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current && counter < idx - 1)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
