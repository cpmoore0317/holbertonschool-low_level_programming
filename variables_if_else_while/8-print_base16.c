#include <stdio.h>

/**
 * main - Displays all the numbers of base 16 in
 * lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;
	char l = 'a';

	do {
		putchar(n);
		n++;
	} while (n <= 58);
	do {
		putchar(l);
		l++;
	} while (l <= 'f');
	putchar('\n');
	return (0);
}
