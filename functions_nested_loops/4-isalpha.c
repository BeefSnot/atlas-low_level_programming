#include "main.h"

/**
 * _isalpha - Checks if characters are alphabetic.
 * @c: Character checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 if none.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
