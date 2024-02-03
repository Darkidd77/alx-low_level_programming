#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *n, *tmp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			n = ht->array[x];
			while (n != NULL)
			{
				tmp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(h->array);
	free(h);
}
