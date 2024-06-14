#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector (strings)
 *
 * Description: If no number, print 0 with a new line.
 * If symbol, print error with a new line.
 *
 * Return: Sum positive numbers 0 (yes), otherwise 1.
 *
 */

int main(int argc, char *argv[])
{
	int sum = 0; /* must have starting value */
	int a, b;

	for (a = 1; a < argc; a++) /* outer loop, each argument */
	{
		for (b = 0; argv[a][b] != '\0'; b++)
			/* inner loop, each character */
		{
			if (!isdigit(argv[a][b])) /* if != digit */
				/* isdigit <ctype.h> */
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]); /* convert and add to sum */
		/* sum must have starting value */
	}

	printf("%d\n", sum);

	return (0);
}
