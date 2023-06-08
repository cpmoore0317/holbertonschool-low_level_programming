#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * leet - Encodes a string into 1337
 * @str: String to be altered
 *
 * Return: Altered string
 */
char *leet(char *str)
{
	long unsigned int i, j;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	unsigned char replacements[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(letters) / sizeof(letters[0]); j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
			}
		}
	}
	return (str);
}
