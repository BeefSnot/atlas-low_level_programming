#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector (strings)
 *
 * Return: 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
