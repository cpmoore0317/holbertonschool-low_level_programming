#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is lower case
 * @c: character to be compared
 *
 * Return: Returns a true or false value
 */
int _islower(int c)
{
	int b;

	for (b = 97; b <= 122; b++)
	{
		if (c == b)
		{
			return (1);
		}
	}
	return (0);
}
