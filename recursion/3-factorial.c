#include "main.h"
/**
 * factorial - generates a factorial number.
 * @n: number to generate factorial.
 * Return: facorial number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
