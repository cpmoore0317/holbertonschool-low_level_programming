
#include "lists.h"
/**
* listint_len - a function that returns the number
* of elements in a linked listint_t list
* @h: input info
* Return: 0
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
