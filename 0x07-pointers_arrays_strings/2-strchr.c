#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != c) && s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		else
			return (NULL);
		i++;
	}
	return (NULL);
}
