#include "hash_tables.h"
/**
* hash_table_print - prints the hash table
* @ht: hash tables
* Return: a dictionary with the format of the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s', ", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
