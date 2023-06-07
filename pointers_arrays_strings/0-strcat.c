#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @src: string to be appended
 * @dest: append destination
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i;

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
