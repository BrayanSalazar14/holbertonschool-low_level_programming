#include "dog.h"
#include <stdio.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDod = malloc(sizeof(dog_t))

		if (new_dog == NULL)
			return NULL;

	if (newDog->name == NULL)
	{
		free(newDog);
		return NULL;
	}

	newDog->age = age;

	if (newDog->owner == NULL)
	{
		free(newDog);
		return NULL;
	}

	return newDog;
}

