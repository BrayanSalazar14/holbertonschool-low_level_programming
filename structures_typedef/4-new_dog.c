/*
 *Author: Brayan Steven Salazar
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - Function that creates and initializes a new struct dog
 *@name: Pointer to a string representing the dog's name
 *@age: Float value representing the dog's age
 *@owner: Pointer to a string representing the owner's name
 *
 *Return: Pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t nameLength = strlen(name);
	size_t ownerLength = strlen(owner);
	size_t i;

	dog_t *newDog;

	newDog = (dog_t *)malloc(sizeof(dog_t));

		if (newDog == NULL)
			return (NULL);

	newDog->name = malloc(nameLength + 1);
	newDog->owner = malloc(ownerLength + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	for (i = 0; i <= nameLength; i++)
		newDog->name[i] = name[i];

	newDog->age = age;

	for (i = 0; i <= ownerLength; i++)
		newDog->owner[i] = owner[i];

	return (newDog);
}

