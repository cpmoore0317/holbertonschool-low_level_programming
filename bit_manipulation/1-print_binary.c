#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - print an unsigned int in binary
 * @n: num to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1) {
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
