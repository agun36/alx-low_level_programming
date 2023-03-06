#include "main.h"

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

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
