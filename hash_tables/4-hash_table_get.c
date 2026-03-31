#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to get value from
 * @key: key associated with value
 *
 * Return: Value or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *lhead;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	lhead = ht->array[idx];
	while (lhead)
	{
		if (!strcmp(lhead->key, key))
		{
			return (lhead->value);
		}
		lhead = lhead->next;
	}
	return (NULL);
}
