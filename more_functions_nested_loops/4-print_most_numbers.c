#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Prints numbers, from 0 to 9, with a few
 * exceptions
 *
 * Return: No return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar ('0' + i);
	_putchar('\n');
}