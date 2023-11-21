/*
 *Author: Brayan Steven Salazar
 */

#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure with name, age, and owner
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to a string representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This function initializes the members of a dog structure with
 * the provided values for name, age, and owner. If the pointer to the dog
 * structure is NULL, the function does nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
