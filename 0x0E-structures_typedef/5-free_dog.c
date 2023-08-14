#include "dog.h"

/**
 * free_dog - Function that frees memory allocated to dog_t;
 *
 * @d: point to the dog_t object.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
