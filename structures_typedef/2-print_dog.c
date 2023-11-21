#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("%s\n", (d->name ? d->name : "nail"));
	printf("%0.1f\n", d->age);
	printf("%s\n", (d->owner ? d->owner :"nail"));


}
