#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string
 * @accept: string 2
 *
 * Return: Return len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}
