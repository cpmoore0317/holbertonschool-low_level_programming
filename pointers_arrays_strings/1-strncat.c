#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - Concates two strings
 * @n: bumber of bytes
 * @src: string to be concatenates
 * @dest: destination string
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + n] = '\0';
	return (dest);
}
