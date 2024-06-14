#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector (strings)
 *
 * Return: 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	(void)argc; /* mark argc as unused */

	printf("%s\n", argv[0]); /* %s print string, argv[0] prog name */

	return (0);
}
