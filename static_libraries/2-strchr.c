#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a char in a passed string
 * @s: String to search
 * @c: Character to locate
 *
 * Return: Pointer to charcter or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	int i2;
	int d;
	char p[7000];
	char *n = p;

	i = 0;
	i2 = 0;
	d = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) || (d == 1))
		{
			p[i2] = s[i];
			d = 1;
			i2++;
		}
		i++;
	}
	if (s[i] == c)
	{
		p[i] = s[i];
		return (n);
	}
	if (d == 1)
		return (n);
	else
		return (NULL);
}
