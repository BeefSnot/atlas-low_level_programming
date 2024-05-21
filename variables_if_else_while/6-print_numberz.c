/*
 * File: 6-print_numberz.c
 * Author: James Hamby
 */

#include <stdio.h>

/**
 * main - This prints all single digit numbers base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
