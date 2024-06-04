#include "main.h"
/**
*_strpbrk - locates the first
* in the string of any of the bytes
*
*
*@s: string where search is
*@accept: string searched bytes are located
*
*Return:Returns
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
