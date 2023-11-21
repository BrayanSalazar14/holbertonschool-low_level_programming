/*
 *Author: Brayan Steven Salazar
 */

#include "dog.h"
#include <stdio.h>

/**
 *print_dog - Function that prints a struct dog
 *@d: Pointer to the dog structure to be initialized
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name ? d->name : "(nil)"));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));


}
