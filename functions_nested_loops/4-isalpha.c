#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Function that checks for an alphabetical character
 * @c: charachter to be compared
 *
 * Return: Returns a true or false value
 */
int _isalpha(int c)

{
	int a;

	for (a = 65; a <= 90; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	for (a = 97; a <= 122; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
