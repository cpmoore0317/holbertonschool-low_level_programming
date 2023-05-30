#include <stdio.h>
#include "main.h"
/**
 * main - uses putchar to display _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int x;

char a[] = "_putchar";

	for (x = 0 ; x < 8 ; x++)
	{
	putchar(a[x]);
	}
	putchar('\n');
	return (0);
}
