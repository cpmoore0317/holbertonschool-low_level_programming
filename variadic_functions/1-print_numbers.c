#include <variadic_functions.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

