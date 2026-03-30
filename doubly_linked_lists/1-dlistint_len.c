#include "lists.h"

/**
 * dlistint_len - Fonction that prints the length of a list
 * @h: Points to the list
 * Return: The length of a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	
	while (h)
	{
	h = h->next;
	length++;
	}
	return (length);
}
