#include <stdio.h>

/**
 * main - Displays all the numbers of base 16 in
 * lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 1;
	char l = 'a';

	do {
		putchar(n);
		n++;
		putchar(l);
		l++;
	} while (n <= 9);
	(l <= 'f');
	putchar('\n');
	return (0);
}
