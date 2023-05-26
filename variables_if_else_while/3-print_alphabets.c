#include <stdio.h>

/**
 * main - Displays the alphabet in lowercase, then
 * uppercase using putchar command
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';
	char upper = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
