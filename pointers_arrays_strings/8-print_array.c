#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @n: Number of elements
 * @a: Array
 *
 * Return: No return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
