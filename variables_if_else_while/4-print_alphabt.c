#include <stdio.h>

/**
 * main - Displays the alphabet in lowercase using
 * putchar command
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
