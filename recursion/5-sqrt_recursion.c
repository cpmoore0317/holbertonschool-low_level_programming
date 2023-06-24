#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Initial value
 *
 * Return: Value
 */
int _sqrt_recursion(int n)
{
	int low = 1;
	int high = n;
	int mid;
	int square;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
