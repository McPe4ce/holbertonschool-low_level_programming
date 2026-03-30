#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: Points towards the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
