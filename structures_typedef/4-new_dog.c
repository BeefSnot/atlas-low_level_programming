#include "dog.h"
#include <stdlib.h> /* malloc */
#include <string.h> /* string manipulation ie. copy name and owner */

/**
 * new_dog - Function that creates a new doggo
 *
 * @name: Name of doggo
 * @age: Age of the puppo
 * @owner: The owners name of the pupper
 *
 * Description:
 *
 * Return: Pointer to new dog, NULL if fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0;
	int owner_len = 0;
	int n; /* counter */

	/* calc length of name string */
	while (name[name_len++])
		;

	/* calc length of owner string */
	while (owner[owner_len++])
		;

	/* allocate mem for dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* allocate mem for name string in new dog struct */
	new_dog->name = malloc(sizeof(char) * (name_len));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* copy name string to allocated memory */
	for (n = 0; n < name_len; n++)
	       new_dog->name[n] = name[n];

	/* allocate mem for owner string in new dog struct */
	new_dog->owner = malloc(sizeof(char) * (owner_len));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/* copy owner string to allocated memory */
	for (n = 0; n < owner_len; n++)
		new_dog->owner[n] = owner[n];

	/* set age of new dog */
	new_dog->age = age;

	return (new_dog);
}
