#include "lists.h"
/**
* list_len - a function that returns the number
*  of elements in a linked list_t list
* @h: input
* Return: 0
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	for (; h != NULL; h = h->next)
	{
		len++;
	}
	return (len);
}
