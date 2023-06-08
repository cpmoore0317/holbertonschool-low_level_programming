#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: 0 if strings are equal, or return the
 * difference between two characters
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (*s1 - *s2);
}
