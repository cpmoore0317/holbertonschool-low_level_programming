#include "hash_tables.h"
/**
* hash_table_set - add an element to the table
* @ht: hash table
* @key: key of the element
* @value: value of the element
* Return: an element added to the table
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
	    if (strcmp(node->key, key) == 0)
	    {
		    /* Key already exists, update the value */
		    free(node->value);
		    node->value = strdup(value);
		    return (1);
	    }
	    tmp = node;
	    node = node->next;
	}

	/* Key does not exist, create a new node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	/* Add the new node to the front of the list */
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
		tmp->next = node;

	return (1);
}
