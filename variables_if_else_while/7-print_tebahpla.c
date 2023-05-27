#include <stdio.h>

/**
 * main - Displays the alphabet backwards in lowercase using
 * putchar command
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
