#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from
 * 0 to 14, followed by a new line
 *
 * Return: No return
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i < 10; i++)
	{
		for (j = '0'; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
