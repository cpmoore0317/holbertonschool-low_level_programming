#include <stdio.h>
#include "main.h"

/**
 * main - Uses the _putchar function to print the
 * alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
