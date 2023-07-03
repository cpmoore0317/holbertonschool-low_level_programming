#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copys a stt to a new location
 * @dest: The destination
 * @src: The Source
 *
 * Return: Pointer to Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
