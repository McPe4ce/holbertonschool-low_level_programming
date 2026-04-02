#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: Key string (must not be empty)
 * @value: Value string
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *cur;
	char *dup_value, *dup_key;

	/* Validate input pointers and reject empty keys. */
	if (!ht || !key || key[0] == '\0' || !value)
	{
		return (0);
	}

	/* Compute the array index for this key. */
	index = key_index((const unsigned char *)key, ht->size);
	
	/*
	 * If key already exists in this bucket, replace only the value
	 * and keep the same node.
	 */
	for (cur = ht->array[index]; cur; cur = cur->next)
	{
		if (strcmp(cur->key, key) == 0)
		{
			/* Duplicate new value first so old one is not lost on failure. */
			dup_value = strdup(value);
			if (!dup_value)
			{
				return (0);
			}

			/* Replace stored value for the existing key. */
			free(cur->value);
			cur->value = dup_value;
			
			return (1);
		}
	}

	/* Create a new node when key is not already present. */
	node = malloc(sizeof(hash_node_t));

	/* Stop if node allocation fails. */
	if (!node)
	{
		return (0);
	}

	/* Duplicate key to store an owned copy in the table. */
	dup_key = strdup(key);

	if (!dup_key)
	{
		free(node);
		return (0);
	}

	/* Duplicate value to store an owned copy in the table. */
	dup_value = strdup(value);

	if (!dup_value)
	{
		/* Clean up prior allocations before failing. */
		free(dup_key);
		free(node);
		return (0);
	}
	
	/* Insert node at the head of the bucket's linked list. */
	node->key = dup_key;
	node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	
	return (1);
}
