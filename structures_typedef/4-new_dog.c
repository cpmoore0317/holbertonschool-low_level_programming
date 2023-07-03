#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: New dogs name
 * @age: New dogs age
 * @owner: New dogs owner
 *
 * Return: Returns the new dog
 */

dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return NULL;
	}
	
	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return NULL;
	}

	dog->age = age;
	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}

	return dog;
}
