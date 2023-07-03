#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Finds one string inside another
 * @haystack: Full string to examine
 * @needle: String to locate
 *
 * Return: Pointer to first occurance of full substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int i2;
	int m;

	i = 0;
	i2 = 0;
	m = 0;
	if (needle[i2] == '\0')
		return (&haystack[i]);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[i2])
		{
			if (m == 0)
				m = i - 1;
			i2++;
			i++;
			if (needle[i2] == '\0')
				break;
		}
		else
		{
			m = 0;
			i++;
		}
	}
	if (m != 0)
		return (&haystack[m]);
	return (NULL);
}
