#include <stdio.h>

/**
 * main - Displays single digit numbers using putchar
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
