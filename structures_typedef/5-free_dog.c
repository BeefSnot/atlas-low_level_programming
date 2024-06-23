#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees any memory held captive by the dog.
  * @d: pointer to struct
  * Return: What's this?!?!?!
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
