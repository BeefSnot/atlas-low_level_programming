#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c, s, or NULL
*
*
*@s:string targeted
*@c:character targeted
*
*Return: returns to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
