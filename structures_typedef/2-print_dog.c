#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - prints the doggo
  * @d: pointer to the doggy
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
