#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: Void 
 */

void prints_strings(const char *separator, const unsigned int n, ...)
{
	
