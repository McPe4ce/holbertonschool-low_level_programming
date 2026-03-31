#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Function that prints the x node of a list
 * @head: pointer to the list
 * @index: Number of the node that must be returned
 * Return: node_indexer (Node)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_indexer = head;
	unsigned int counter = 0;

	while (node_indexer != NULL && counter < index)
	{
		node_indexer = node_indexer->next;
		counter++;
	}
	if (node_indexer == NULL)
	{
		return (NULL);
	}
	return (node_indexer);
}
