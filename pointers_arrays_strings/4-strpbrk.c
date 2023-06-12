#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String
 * @accept: String 2
 *
 * Return: return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *t;

	for (; *s; s++)
	{
		for (t = accept; *t; t++)
		{
			if (*s == *t)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
