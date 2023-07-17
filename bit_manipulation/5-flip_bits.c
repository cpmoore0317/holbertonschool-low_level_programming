#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: input
 * @m: bits
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x;

	for (x = n ^ m; x; x >>= 1)
	{
		count += x & 1;
	}

	return (count);
}
