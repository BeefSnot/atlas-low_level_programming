#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - searches for some integer
  * @array: points to array
  * @size: size array
  * @cmp: points to the function
  * Return: index of the first element that is found.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
