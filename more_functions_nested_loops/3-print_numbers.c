#include <stdio.h>
#include "main.h"
/**
 * print_sumbers - Prints numbers, from 0 to 9, followed
 * by a new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
