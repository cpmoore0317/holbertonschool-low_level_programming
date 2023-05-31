#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: Number to be evaluated
 *
 * Return: Returns the abs value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
