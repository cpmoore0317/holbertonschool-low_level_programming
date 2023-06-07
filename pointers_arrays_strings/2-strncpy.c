#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string
 *
 * Return: Returns a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > strlen(dest))
	{
		n = strlen(dest);
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
i	return (dest);
}
