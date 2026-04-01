#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *cur;
	char *k;
	char *v;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (cur = ht->array[index]; cur; cur = cur->next)
	{
		if (strcmp(cur->key, key) == 0)
		{
			v = strdup(value);
			if (!v)
				return (0);
			free(cur->value);
			cur->value = v;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
