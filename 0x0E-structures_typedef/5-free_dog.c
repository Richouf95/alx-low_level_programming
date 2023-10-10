#include <stdlib.>
#include "dog.h"

/**
 * free_dog - free memory of a struct
 * @d: input
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
