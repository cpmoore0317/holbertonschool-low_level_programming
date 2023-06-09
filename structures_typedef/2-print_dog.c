#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog stats
 * @d: dog to print
 *
 * Return: No return
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("Owner: %s\n", d->owner);
}
