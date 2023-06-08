#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * string_toupper - Changes all lowercase letters of a string
 * to uppercase
 * @str: String to be altered
 *
 * Return: Nothing
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
