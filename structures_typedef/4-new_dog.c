#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t))

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

