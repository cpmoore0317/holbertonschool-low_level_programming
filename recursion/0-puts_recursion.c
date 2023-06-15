#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
