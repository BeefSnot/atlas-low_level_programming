#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs simple operations
 *
 * @argc: Number of arguments
 * @argv: Argument vector, array of strings
 *
 * Description:
 *
 * Return: 0 on success, exits with error code on failure
 *
 */

int main(int argc, char *argv[])
/* (argument count, vector representing command-line arguments) */
{
	int num1, num2; /* vars store int conversions of arguments */
	int result; /* var to store result of operation */
	int (*operation)(int, int); /* func ptr to selected operation */

	/* check if number of arguments is correct */
	if (argc != 4) /* name, num, operator, num */
	{
		printf("Error\n");
		exit(98); /* status 98, incorrect number of arguments */
	}

	/* convert arguments to integers */
	num1 = atoi(argv[1]); /* arg 1 */
	num2 = atoi(argv[3]); /* arg 3 */

	/* get operation function based on operator */
	operation = get_op_func(argv[2]);

	/* check if operator is valid */
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99); /* status 99, invalid operator */
	}

	/* check for division or modulo by zero */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	/* checks first char [0] of argv[2] */
	{
		printf("Error\n");
		exit(100); /* status 100, division by 0 */
	}

	/* perform operation */
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
