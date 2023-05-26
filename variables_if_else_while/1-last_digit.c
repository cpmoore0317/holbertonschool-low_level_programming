#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Displays a random number, then uses set if conditions to
 * compare the number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int finaldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	finaldigit = n % 10;
	printf("Last digit of %d is ", n);
	if (finaldigit > 5)
		printf("%d and is greater than 5\n", finaldigit);
	else if (finaldigit == 0)
		printf("%d and is 0\n", finaldigit);
	else
		printf("%d and is less than 6 and not 0\n", finaldigit);
	return (0);
}
