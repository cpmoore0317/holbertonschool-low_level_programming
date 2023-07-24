#include "hash_tables.h"
/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: the hash table deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
		}
	}

	free(ht->array);
	free(ht);
}
