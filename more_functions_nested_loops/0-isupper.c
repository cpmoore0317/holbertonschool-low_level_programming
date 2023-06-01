#include <stdio.h>
#include "main.h"

/**
 * _issupper - checks to see if a letter is uppercase
 * @c: the letter being checked
 *
 * Return: 1 if letter is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
