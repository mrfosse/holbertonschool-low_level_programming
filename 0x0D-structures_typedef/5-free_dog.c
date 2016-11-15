#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free momory from dog
 *
 * @d: pointer to free
 * Return: none.
 */
void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
