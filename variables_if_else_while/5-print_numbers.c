#include <stdio.h>

/**
 * main - Displays numbers base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;

	do {
		printf("%d", b);
		b++;
	} while (b < 10);
	putchar('\n');
	return (0);
}
