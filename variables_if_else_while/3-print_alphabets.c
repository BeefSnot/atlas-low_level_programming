/*
 * File: 3-print_alphabets.c
 * Auth: James Hamby
 */

#include <stdio.h>
/**
 * main - This program will print the whole alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
