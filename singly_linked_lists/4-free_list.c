#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Function that frees a list
 * @head: Points to the first node of the list
 */

void free_list(list_t *head)
{
	list_t *freebird;

	while (head != NULL)
	{
		freebird = head->next;
		free(head->str);
		free(head);
		head = freebird;
	}
}
