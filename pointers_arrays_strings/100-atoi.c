#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _atoi - Converts a string to an integer
 *
 * Return: Value multiplied by the sign
 */
int _atoi(char *s)
{
	int sign = 1;
	int value = 0;

	while (*s && !isdigit(*s))
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s == '+')
		{
			sign = 1;
		}
		s++;
	}

	while (*s && isdigit(*s))
	{
		value = value * 10 + (*s - '0');
		s++;
	}

	return (value * sign);
}
