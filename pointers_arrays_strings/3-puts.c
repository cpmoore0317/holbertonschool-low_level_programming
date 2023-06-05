#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * _puts - Prints a string followed by a new line.
 * @str: String
 *
 * Return: No return
 */
void _puts(char *str)
{
	write(1, str, strlen(str));
	write(1, "\n", 1);
}
