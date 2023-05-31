#include "main.h"
#include <stdio.h>

/**
 * print_sign - Fuction that prints the sign of a number
 * @n: Number to be compared
 *
 * Return: Return three values based on n
 */
int print_sign(int n)
{
	int _putchar(char);

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
