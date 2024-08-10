#include "search_algos.h"
#include "print_array.c"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array being searched
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: first index where value is located or -1 if value
 * not found / NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
