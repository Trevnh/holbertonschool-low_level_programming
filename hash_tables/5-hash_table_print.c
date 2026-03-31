#include "hash_tables.h"

/**
 * hash_table_print - Prints the given hash table prints in key value order
 * that they appear in the hash table, order:array, list
 * @ht: hash table to print from
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int i = 0;
	hash_node_t *lhead;

	printf("{");

	while (idx < ht->size)
	{
		lhead = ht->array[idx];
		while (lhead)
		{
			if (i)
				print(", ");
			printf("'%s': '%s'", lhead->key, lhead->value);
			lhead = lhead->next;
			i = 1;
		}
		idx++;
	}
	printf("}\n");
}
