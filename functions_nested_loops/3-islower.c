#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase number
 * @c: character to be compared
 *
 * Return: Always 0
 */
int _islower(int c)
{
	int a = 97;

	while (a <= 122)
	{
		if (c == a)
		{
			return (1);
		}
	a++;
	}
	return (0);
}
