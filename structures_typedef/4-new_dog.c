#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	char auxName;
	char auxOwner;

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t))

		if (newDog == NULL)
			return NULL

	newDog->name = name;
	auxName = name;
	if (newDog->auxName == NULL)
	{
		free(newDog);
		return NULL;
	}

	newDog->age = age;

	newDog->owner = owner;
	auxOwner = owner;
	if (newDog->auxOwner == NULL)
	{
		free(auxName);
		free(newDog);
		return NULL;
	}

	return newDog;
}

