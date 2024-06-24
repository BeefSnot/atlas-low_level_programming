#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - executes a function as a parameter on each element
  * @array: to iterate over
  * @size: size of the array
  * @action: pointer to the function executed on each element
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
