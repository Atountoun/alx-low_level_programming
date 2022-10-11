#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: a pointer to the dog to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
