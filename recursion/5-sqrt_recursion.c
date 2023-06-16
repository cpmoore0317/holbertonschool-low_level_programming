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
	int low, high;

	if (n == 0)
	{
		return (0);
	}

	low = 1;
	high = n;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
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
