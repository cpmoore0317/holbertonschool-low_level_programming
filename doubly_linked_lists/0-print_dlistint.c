#include "lists.h"
/**
 * print_dlistint - function that prints a list
 * @h: pointer to list to print
 * Return: On success 1.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return count;
}
