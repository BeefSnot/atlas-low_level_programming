/*
 * File: 7-print_tebahpla.c
 * Auth: James Hamby
 */

#include <stdio.h>

/**
 * main - Prints the entire lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
