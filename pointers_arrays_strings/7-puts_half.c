#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: String
 *
 * Return: No Return
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;
	int i;

	if (len % 2 == 1)
	{
		half++;
	}
	for (i =  half; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
