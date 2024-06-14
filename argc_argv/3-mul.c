#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector (strings)
 *
 * Return: Product of two numbers 0 (yes), otherwise 1 .
 *
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	/* convert argv to integer and multiply */

	printf("%d\n", product); /* %d integer */

	return (0);
}
