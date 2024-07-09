#include <stdio.h>

/**
 * get_bit - function that returns the value of a specific index.
 * @n: number to scan.
 * @index: bit to return.
 *
 * Return: Bit (1 | 0)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

