#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates array of char with special char
 *
 *
 * @size: Size of array
 * @c: Char to initialize
 *
 * Return: NULL if size is 0 or if fails, otherwise
 * points to an array
 *
 */

char *create_array(unsigned int size, char c)
	/* "*" references pointer */
{
	char *array; /* first element of array */
	/* declares array as pointer to char */

	unsigned int n; /* size of array */

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	/* calculates total mem required for size (num of char) */

	if (array == NULL) /* unable to allocate, fails */
		return (NULL);

	for (n = 0; n < size; n++)
	{
		array[n] = c; /* initialize */
	}

	return (array);
}
