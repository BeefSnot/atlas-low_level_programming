/*
 * File: 5-print_numbers.c
 * Author: James Hamby
 */

#include <stdio.h>

/**
 * main - Prints all single digit number base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
