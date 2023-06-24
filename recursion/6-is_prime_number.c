#include <stdio.h>
#include "main.h"
/**
 * prime - get square root
 * @n: number
 * @res: Result
 *
 * Return: Result
 */

int prime(int n, int div)
{
	if (res >= 1)
	{
		return (1);
	}
	if (n % res)
	{
		return (0);
	}
	return (prime(n, res - 1));
}

/**
 * is_primne_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * 
 * Return : Result
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if ((n < 2) || (!(n % 2)))
	       return (0);
	return (prime(2, n));
}
