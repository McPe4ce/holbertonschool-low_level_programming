#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Function that frees a list
 * @head: Points to the first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freebird;

	while (head != NULL)
	{
		freebird = head->next;
		free(head);
		head = freebird;
	}
}
