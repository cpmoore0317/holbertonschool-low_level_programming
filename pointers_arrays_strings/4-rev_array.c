#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - REverses the content of an array of integers
 * @n: Number of elements of the array
 * @a: An array of integers
 *
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
