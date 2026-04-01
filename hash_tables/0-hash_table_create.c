#include "hash_tables.h"
#include "stdlib.h"

/**
 * hash_table_create - Function that creates a hashtable
 * @size: Size of the table
 * Return: theTABLE (Created the table)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int indexor;
	hash_table_t *theTABLE;

	theTABLE = malloc(sizeof(hash_table_t));

	if (theTABLE == NULL)
	{
		free(theTABLE);
		return (NULL);
	}

	theTABLE->size = size;

	theTABLE->array = malloc(sizeof(hash_node_t*) * size);

	if (theTABLE->array == NULL)
	{
		free(theTABLE);
		return (NULL);
	}

	for (indexor = 0; indexor < size; indexor++)
	{
		theTABLE->array[indexor] = NULL;
	}
	return (theTABLE);
}
