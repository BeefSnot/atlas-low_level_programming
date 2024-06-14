#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument Count
 * @argv: Argument vector (strings)
 *
 * Return: 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	(void)argv; /* mark argv unused */

	printf("%d\n", argc - 1); /* %d print int */
	/* argc - 1 excludes program name */

	return (0);
}
