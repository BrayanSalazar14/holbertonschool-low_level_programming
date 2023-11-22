/*
 *Author: Brayan Steven Salazar
 */

#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to a dog_t structure.
 *
 * This function frees the memory allocated for the dynamically
 * allocated fields of the provided dog_t structure, including
 * the name and owner fields. It also frees the memory for the
 * structure itself.
 */
void free_dog(dog_t *d)
{
	/**
	 *Si no es NULL es por que si se asigno memoria exitosamente y como
	 *ya no necesito la memoria, debo limpiarla
	 */
	if (d != NULL)
	{
	free(d->name);
	/* d->age no se libera por que es un tipo de dato primitivo "int" */
	/* no es un puntero o una memoria asignada dinamicamente */
	free(d->owner);
	free(d);
	}
}
