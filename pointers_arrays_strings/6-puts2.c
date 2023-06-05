#include <stdio.h>
#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: String
 *
 * Return: No Return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
