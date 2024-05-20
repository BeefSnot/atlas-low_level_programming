/*
 * File: 2-print_alphabet.c
 * Author: James Hamby
 */

#include <stdio.h>

/**
 * main - This will print the whole alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
