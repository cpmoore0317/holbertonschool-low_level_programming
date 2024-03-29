#include "hash_tables.h"
/**
* key_index - a function that gives the index of the key
* @key: key of the hash table
* @size: size of the array
* Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((unsigned char *)key);
	return (hash % size);
}
