#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function that adds a node at the start of the list
 * @head: Pointer to the pointer to the first node of the list
 * @str: Pointer that stores the string
 * Return: new node (Returns the new node)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
