#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;
	int len;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	len = strlen(name) + 1;
	name_copy = malloc(len);
	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	len = strlen(owner) + 1;
	owner_copy = malloc(len);
	if (!owner_copy)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
