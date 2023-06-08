#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be altered
 *
 * Return: New string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			continue;
		}
		str[i] = toupper(str[i]);
	}
	return (str);
}
