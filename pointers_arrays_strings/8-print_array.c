#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of some arrays of integers
 *
 * @a: array being printed
 * @n: number of elements printing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
