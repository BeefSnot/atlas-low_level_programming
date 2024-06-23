#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize dog.
  * @d: name of the struct
  * @name: name of doggo in struct
  * @age: age of pupper in struct
  * @owner: name of the doggos owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
