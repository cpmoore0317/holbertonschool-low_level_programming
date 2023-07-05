#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * c = char, i = integer, f = float, s = char * (if NULL, print (nil))
 * @format: list of arg types
 * Return: 0
 */

void print_all(const char * const format, ...)
{
