#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory
 * @d: struct dog to free
 *
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
