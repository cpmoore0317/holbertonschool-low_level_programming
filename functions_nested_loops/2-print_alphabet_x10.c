#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase,
 * followed by a new line, 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int newline;

	for (newline = 0; newline < 10; newline++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
