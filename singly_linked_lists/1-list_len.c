#include "lists.h"

/**
 * list_len - Function that prints the number of elements
 * @h: Points to the structure
 * Return: counter (Number of elements)
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
