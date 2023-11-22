#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	return newDog;
}

