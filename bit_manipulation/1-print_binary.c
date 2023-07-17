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
	unsigned long int mask = 1UL << 63;

	for (i = 0; i < 64; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
