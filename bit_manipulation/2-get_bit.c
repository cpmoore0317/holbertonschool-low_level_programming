#include "main.h"
/**
 * get_bit - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= 64)
	{
		return (-1);
	}

	return ((n & mask) ? 1 : 0);
}
