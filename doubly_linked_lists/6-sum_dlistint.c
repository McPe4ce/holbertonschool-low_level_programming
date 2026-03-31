#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Function that sums the content of a list
 * @head: points to the list
 * Return: sum (Sum)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *indexor = head;

	while (indexor != NULL)
	{
		sum += indexor->n;
		indexor = indexor->next;
	}

	return (sum);
}
