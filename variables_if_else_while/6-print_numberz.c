#include <stdio.h>

/**
 * main - Displays numbers of base 10 as characters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = 48 ; b < 58 ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
