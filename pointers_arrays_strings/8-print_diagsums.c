#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: A square matrix of integers
 * @size: The size of the matrix
 *
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int main_diagonal_sum = 0;
	int secondary_diagonal_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		main_diagonal_sum += a[i * size + i];
		secondary_diagonal_sum += a[i * size + (size - 1 - i)];
	}
	printf("The sum of the two diagonals is: %d, %d\n", main_diagonal_sum, secondary_diagonal_sum);
}
