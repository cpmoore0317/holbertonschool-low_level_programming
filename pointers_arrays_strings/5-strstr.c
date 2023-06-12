#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to search through
 * @needle: string to find
 *
 * Return: Return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
