#include "main.h"

/**
 * _strncpy - Copy a string starting at 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars being copied
 * Return: `dest` string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
