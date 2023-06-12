#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: Return NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
