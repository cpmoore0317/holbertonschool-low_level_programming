#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: const char
 * Return: 0 or new integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		n = n << 1;
		if (b[i] == '1')
		{
			n = n | 1;
		}
	}

	return (n);
}
