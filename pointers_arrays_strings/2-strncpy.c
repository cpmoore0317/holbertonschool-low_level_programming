#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string
 * @n: size of string
 * @src: string to be copied
 * @dest: destination of copied string
 *
 * Return: Returns a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > (int)strlen(dest))
	{
		n = (int)strlen(dest);
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
